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
int getlen(Node *head)
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
Node *reverseKnode(Node *head, int K)
{

    if (head == NULL)
    {
        return NULL;
    }
    // length jyada mil gyi LL se
    int len = getlen(head);
    if (K > len)
    {
        // cout << "Enter Valid value of K:" << endl;
        return head;
    }

    // If LL>K
    // Step:1
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = curr->next;
    int count = 0;
    while (count < K)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    // Step:2=>Recursive Cal
    if (forward != NULL)
    {
        // we still have nodes to reverse
        head->next = reverseKnode(forward, K);
    }

    // step:3=>return head of modified LL
    return prev;
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

    head = reverseKnode(head, 5);
    Print(head);
}