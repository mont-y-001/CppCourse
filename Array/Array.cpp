#include <iostream>
using namespace std;
int main()
{
    int arr[5];

    cout << "Enter the value in array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "printing the values in array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << arr << endl;
    // cout << &arr << endl;
    cout << "Array Created Succesfully";
}