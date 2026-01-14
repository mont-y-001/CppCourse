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
bool CheckForLoop(Node *&head)

{
    if (head == NULL)
    {
        cout << "LL is Empty:" << endl;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            cout << "Present" << endl;
            return true;
        }
    }
    cout << "Loop is Not present" << endl;
    return false;
}

Node *StartingPointOfLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is Empty:" << endl;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {

            slow = head;
            break;
        }
    }
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
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
    Node *seven = new Node(170);
    Node *eight = new Node(180);
    Node *nine = new Node(190);
    Node *ten = new Node(200);

    head->next = sec;
    sec->next = third;
    third->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = ten;
    ten->next = four;

    // // Print(head);
    // cout << endl;
    cout << "Loop present or not: " << CheckForLoop(head) << endl;
    cout << "Starting point of LOOP IS: " << StartingPointOfLoop(head)->data << endl;
}