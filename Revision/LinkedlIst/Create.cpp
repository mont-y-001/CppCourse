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
int FindLength(Node*&head){
    Node *temp = head;
    int len = 0;
    while(temp != NULL){
      temp = temp->next;
      len++;
    }
    return len;
}
void InsertAtHead(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  Node *newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
  if (tail == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  Node *newNode = new Node(data);
  tail->next = newNode;
  tail = newNode;
}
void InsertAtPosition(Node*&head,Node*&tail,int data,int pos){
  if(pos == 0){
     InsertAtHead(head, tail, data);
        return;
  }
  int len = FindLength(head);
  if(pos > len){
    InsertAtTail(head,tail,data);
    return;
  }
  int i = 1;
  Node*prev = head;
  while(i< pos){
    prev = prev->next;
    i++;
  }
  Node*curr = prev->next;  
  Node*newNode = new Node(data);
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
  cout << endl;
}
int main()
{
  // Node*first = new Node(10);
  // Node*sec = new Node(30);
  // Node*third = new Node(30);
  // Node*fourth = new Node(466);

  // first->next = sec;
  // sec->next = third;
  // third->next = fourth;
  // fourth->next = NULL;

  Node *head = NULL;
  Node *tail = NULL;
  InsertAtHead(head, tail, 10);
  InsertAtHead(head, tail, 20);
  InsertAtHead(head, tail, 30);
  InsertAtHead(head, tail, 40);

  cout << "Printing from head: ";
  print(head);

  InsertAtTail(head, tail, 10);
  InsertAtTail(head, tail, 20);
  InsertAtTail(head, tail, 30);
  InsertAtTail(head, tail, 40);
  cout << "Printing from tail: ";
  print(head);

  cout << endl;
  cout << "After Insertion at random position" << endl;

  InsertAtPosition(head, tail,55,7);

  cout << "Printing The LL" << endl;
  print(head);
  cout << endl;
}