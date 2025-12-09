#include <iostream>
using namespace std;

class Demo
{
public:
    int *data;

    Demo(int val)
    {
        data = new int(val);
    }

    // Deep copy constructor
    Demo(const Demo &obj)
    {
        data = new int(*obj.data); // allocate new memory and copy value
    }

    ~Demo()
    {
        delete data;
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    Demo obj1(10);
    Demo obj2 = obj1; // Deep copy

    cout << "obj1 data: " << *obj1.data << endl;
    cout << "obj2 data: " << *obj2.data << endl;

    *obj2.data = 20;

    cout << "\nAfter modifying obj2.data:" << endl;
    cout << "obj1 data: " << *obj1.data << endl; // Not affected!
    cout << "obj2 data: " << *obj2.data << endl;

    return 0;
}
