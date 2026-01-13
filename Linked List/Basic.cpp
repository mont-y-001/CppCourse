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
int findlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void InserAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1
    Node *newnode = new Node(data);
    // step:2
    newnode->next = head;
    // step:3
    head = newnode;
}
void InserAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // 1->craete a Node
    Node *newNode = new Node(data);
    // step:2
    tail->next = newNode;
    // step:3
    tail = newNode;
}
void InserAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (position == 0)
    {
        InserAtHead(head, tail, data);
        return;
    }
    int len = findlength(head);

    if (position >= len)
    {
        InserAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
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

//Reverse Linked List
Node *reverse(Node *prev, Node *curr)
{
    if (curr == NULL)
        return prev;

    Node *forward = curr->next;
    curr->next = prev;

    return reverse(curr, forward);
}

Node *reverseUsingLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
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
    Node *tail = NULL;
    cout << "Before Insertion" << endl;
    InserAtHead(head, tail, 10);
    InserAtHead(head, tail, 20);
    InserAtHead(head, tail, 30);
    InserAtHead(head, tail, 40);

    InserAtTail(head, tail, 20);
    InserAtTail(head, tail, 30);
    InserAtTail(head, tail, 40);
    InserAtTail(head, tail, 60);
    print(head);
    cout << endl;
    cout << "After Insertion at random position" << endl;

    InserAtPosition(101, 7, head, tail);

    cout << "Printing The LL" << endl;
    print(head);
    cout << endl;

    Node *prev = NULL;
    Node *curr = head;
    cout << "Printing reverse list" << endl;
    head = reverse(prev, curr);
    cout << endl;
    print(head);
    cout << endl;
}