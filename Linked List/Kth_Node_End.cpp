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

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *KthNodeFromEnd(Node *head, int k)
{
    if (head == NULL || k < 0)
        return NULL;

    head = reverse(head);

    Node *curr = head;
    int count = 0;

    while (curr != NULL && count < k)
    {
        curr = curr->next;
        count++;
    }

    if (curr == NULL)
        return NULL;

    return curr;
}

int main()
{
    Node *head = new Node(10);
    Node *sec = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    head->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next = NULL;
    Print(head);
    int k = 3;
    Node *result = KthNodeFromEnd(head, k);

    if (result != NULL)
        cout << "Kth node from end: " << result->data << endl;
    else
        cout << "Invalid position" << endl;
}