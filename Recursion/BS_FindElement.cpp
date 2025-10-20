#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> &arr, int &size, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        // cout << "Element Founded:";
        return mid;
    }

    if (arr[mid] < key)
    {
        return BinarySearch(arr, size, mid + 1, end, key);
    }
    else
    {
        return BinarySearch(arr, size, start, mid - 1, key);
    }
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 90};
    int size = arr.size(); // int size = sizeof(arr) / sizeof(arr[0]); vector me ye kaam nhi krta
    int key = 50;
    int start = 0;
    int end = size - 1;

    int ans = BinarySearch(arr, size, start, end, key);
    cout << "Answer is: " << ans;

    return 0;
}