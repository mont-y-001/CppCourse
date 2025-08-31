// int x= 5;  => x ki entry banegi symbol table me -> x ko koi address (ex:104)assign hoga -> uske andar 5 store hoga.

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // int b = 5;

    // cout << a << endl;
    // cout << &b << endl; // it give different address

    // Pointer=> in c++ is a variable that store address of another variable

    int *ptr = &a;
    cout << "Address of a is: " << &a << endl;           // print address
    cout << "Address stored in ptr is: " << ptr << endl; // print address but it is address &a
    cout << "Value stored at address ptr points to is: " << *ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;

    // Sizeof of ptr is 8 either it is int,char or double type

    // why Pointer->Dynamic Memory Allocation & Memory Management

    // Null Pointer
    int *ptr = 0;
    cout << *ptr << endl;
}