#include <iostream>
using namespace std;

void update(int *p) // int *p = &ptr
{
    cout << "Address stored inside p is : " << p << endl;
    cout << "Address p is : " << &p << endl;
    *p = *p + 10;
}
int main()
{
    int arr[4] = {20, 1, 2, 14};

    // cout << arr << endl; // Base Address
    // // But agr hum int *p =&arr    ,cout<<p =>value(address of arr) inside p

    // cout << &arr << endl; // Base Address
    // // But agr hum int *p =&arr   , cout<<& => give address of p

    // cout << &arr[0] << endl; // Base Address

    // cout << arr[0] << endl; // Value at 0th index

    // Dono Baat same hai
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;

    // Intresting thing try
    // int i = 0;
    // cout << arr[i] << endl; // 20  & in all below case
    // cout << i[arr] << endl; // New
    // cout << *(arr + i) << endl;
    // cout << *(i + arr) << endl;

    // Important
    // cout << arr + 1 << endl;   //104 + 4 = 108 address
    // int *p = arr+1 << endl;     //108 address
    // arr = arr + 1  << endl;❌

    // Character Story=> different from integer
    // char ch[10] = "Mohit";
    // char *s = ch;

    // cout << ch << endl;    // Mohit
    // cout << &ch << endl;   // Address
    // cout << ch[0] << endl; // M

    // cout << &s << endl; // Address
    // cout << *s << endl; // M
    // cout << s << endl;  // Mohit    // integer me address print hojata h

    // agar hum function pass krte h too vo pointer ke through hota h and value me change pass by reference hota h

    int a = 5;
    cout << "Address of a is: " << &a << endl;
    int *ptr = &a;
    cout << "Adress stored in ptr is: " << ptr << endl;
    cout << "Adress of ptr is: " << &ptr << endl;
    update(ptr);
    cout << "Value of a is: " << a << endl;

    return 0;
}