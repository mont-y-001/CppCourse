#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is Empty" << endl;
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
int main()
{
    Node *head = new Node(10);
    Node *sec = new Node(20);
    Node *third = new Node(30);
    Node *four = new Node(40);
    Node *five = new Node(90);
    Node *six = new Node(100);

    head->next = sec;
    sec->next = third;
    third->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    Print(head);

    cout << "Middle Node is: " << getMiddle(head)->data << endl;
}