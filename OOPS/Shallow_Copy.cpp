#include <iostream>
using namespace std;

class Demo {
public:
    int* data;

    Demo(int val) {
        data = new int(val);
    }

    // Default copy constructor -> shallow copy
    // Demo(const Demo& obj) = default;

    ~Demo() {
        delete data;
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;  // Shallow copy

    cout << "obj1 data: " << *obj1.data << endl;
    cout << "obj2 data: " << *obj2.data << endl;

    *obj2.data = 20;

    cout << "\nAfter modifying obj2.data:" << endl;
    cout << "obj1 data: " << *obj1.data << endl;  // Affected!
    cout << "obj2 data: " << *obj2.data << endl;

    return 0;
}
