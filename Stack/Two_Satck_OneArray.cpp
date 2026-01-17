#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 Underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 Underflow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }
    void print()
    {
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(10);

    s.push1(4);
    s.print();

    s.push1(5);
    s.print();

    s.push1(6);
    s.print();

    s.push1(7);
    s.print();
    s.push1(8);
    s.print();
    s.push2(10);
    s.print();
    s.push2(12);
    s.print();
    s.push2(13);
    s.print();
    s.push2(14);
    s.print();
    cout << "Deleting the element:" << endl;
    s.pop1();
    s.print();
    s.pop2();
    s.print();

    s.pop1();
    s.print();
    s.pop2();
    s.print();

    s.pop1();
    s.print();
    s.pop2();
    s.print();

    s.pop1();
    s.print();
    s.pop2();
    s.print();
}