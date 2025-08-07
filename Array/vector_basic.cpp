#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> arr;
    // int ans = (sizeof(arr) / sizeof(int));
    // // cout << ans << endl;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // insert
    // arr.push_back(6);
    // arr.push_back(87);

    // for (int i = 0; i < arr.size(); i++)
    // {
    // //     cout << arr[i] << " ";
    // }
    // arr.pop_back();
    // cout << arr.size();

    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr(n, 5); // n size ka array declare kiya jo ki initialize kiya h 5 se ,we can give any no. .Default 0 se hota h
    cout << "size of arr: " << arr.size() << endl;
    cout << "capacity of arr: " << arr.capacity() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}