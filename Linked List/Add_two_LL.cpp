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
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node *Solve(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    // Step:1
    head1 = reverse(head1);
    head2 = reverse(head2);

    // Step2
    Node *anshead = NULL;
    Node *anstail = NULL;
    int carry = 0;

    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        if (anshead == NULL)
        {
            anshead = newnode;
            anstail = newnode;
        }
        else
        {
            anstail->next = newnode;
            anstail = newnode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;

        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);

        anstail->next = newnode;
        anstail = newnode;
        head2 = head2->next;
    }
    if (carry != 0)
    {
        Node *newnode = new Node(carry);
        anstail->next = newnode;
        anstail = newnode;
    }
    return reverse(anshead);
}
int main()
{
    Node *head1 = new Node(2);
    Node *sec1 = new Node(7);
    Node *third1 = new Node(9);
    head1->next = sec1;
    sec1->next = third1;

    Node *head2 = new Node(5);
    Node *sec2 = new Node(8);
    Node *third2 = new Node(2);
    Node *four2 = new Node(9);
    head2->next = sec2;
    sec2->next = third2;
    third2->next = four2;

    cout << "LL 1:   ";
    Print(head1);
    cout << endl;
    cout << "LL 2:   ";
    Print(head2);
    cout << endl;

    cout << "New added linked list is:" << endl;

    Node *ans = Solve(head1, head2);
    Print(ans);
}