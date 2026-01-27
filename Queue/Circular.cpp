#include <iostream>
using namespace std;

class CQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // Queue full
        if ((rear + 1) % size == front)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        // First element
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        // Only one element
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }

    void print()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main()
{
    CQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);

    cq.print(); // 10 20 30 40 50

    cq.pop();
    cq.pop();

    cq.push(60);
    cq.push(70);

    cq.print(); // 30 40 50 60 70
}
