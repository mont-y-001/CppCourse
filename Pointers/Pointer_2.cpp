#include <iostream>
using namespace std;
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
    int i = 0;
    cout << arr[i] << endl; // 20  & in all below case
    cout << i[arr] << endl; // New
    cout << *(arr + i) << endl;
    cout << *(i + arr) << endl;

    // Important
    // cout << arr + 1 << endl;   //104 + 4 = 108 address
    // int *p = arr+1 << endl;     //108 address
    // arr = arr + 1  << endl;❌
}