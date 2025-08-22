#include <iostream>
#include <vector>
using namespace std;
int Pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        int mid = start + (end - start) / 2;
        if (mid <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 12, 2, 4, 5, 7, 8, 9};
    int ans = Pivot(arr);
    if (ans == -1)
    {
        cout << "Something wrong" << endl;
    }
    else
    {
        cout << "Ans is at index " << ans << endl;
        cout << "Value of ans is " << arr[ans] << endl;
    }
    return 0;
}