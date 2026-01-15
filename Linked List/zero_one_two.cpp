//Important h ye wala as it is without data modification
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

Node *Sort(Node *&head)
{
    if (head == NULL)
        return head;

    // dummy heads
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;

    Node *onehead = new Node(-1);
    Node *onetail = onehead;

    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    // traverse original list
    Node *curr = head;
    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = NULL;

        if (curr->data == 0)
        {
            zerotail->next = curr;
            zerotail = curr;
        }
        else if (curr->data == 1)
        {
            onetail->next = curr;
            onetail = curr;
        }
        else
        {
            twotail->next = curr;
            twotail = curr;
        }
        curr = nextNode;
    }

    // remove dummy heads
    Node *zero = zerohead->next;
    Node *one = onehead->next;
    Node *two = twohead->next;

    delete zerohead;
    delete onehead;
    delete twohead;

    // join lists
    if (zero != NULL)
    {
        head = zero;
        zerotail->next = (one != NULL) ? one : two;
    }
    else if (one != NULL)
    {
        head = one;
    }
    else
    {
        head = two;
    }

    if (one != NULL)
        onetail->next = two;

    return head;
}

int main()
{
    Node *head = new Node(2);
    Node *sec = new Node(1);
    Node *third = new Node(0);
    Node *four = new Node(0);
    Node *five = new Node(1);
    Node *six = new Node(0);

    head->next = sec;
    sec->next = third;
    third->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;
    cout << "LL is:";
    Print(head);
    cout << "New LL is:";
    head = Sort(head);
    Print(head);
}