#include <iostream>
#include <vector>
using namespace std;
int NearlyS(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{3, 2, 5, 7, 6, 8, 10, 9};
    int target = 80;
    cout << "Index of target is: " << NearlyS(arr, target) << endl;
}