#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InserAtHead(Node *&head, int data)
{
    // step1
    Node *newnode = new Node(data);
    // step:2
    newnode->next = head;
    // step:3
    head = newnode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    Node *head = NULL;
    InserAtHead(head, 10);
    InserAtHead(head, 20);
    InserAtHead(head, 30);
    InserAtHead(head, 40);
    cout << "Printing The LL" << endl;
    print(head);
}