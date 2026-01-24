#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear++] = data;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return front == rear;
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.getFront() << endl; // 10
    q.pop();
    cout << q.getFront() << endl; // 20
    cout << q.getSize() << endl;  // 2

    if (!q.isEmpty())
    {
        cout << "Not Empty:" << endl;
    }
    else
    {
        cout << "Queue is empty:" << endl;
    }
}
