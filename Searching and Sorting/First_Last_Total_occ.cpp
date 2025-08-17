#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1; // keep searching left
        }
        else if (arr[mid] > target)
        {
            end = mid - 1; // go left
        }
        else
        {
            start = mid + 1; // go right
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int size, int target)
{
    int start = 0, end = size - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1; // keep searching right
        }
        else if (arr[mid] > target)
        {
            end = mid - 1; // go left
        }
        else
        {
            start = mid + 1; // go right
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 7, 7, 7, 7, 9, 9, 9, 9, 9, 9, 15, 19};
    int size = 16;
    int target = 9;

    int first = firstOccurrence(arr, size, target);
    int last = lastOccurrence(arr, size, target);

    cout << "First Index of target is: " << first << endl;
    cout << "Last Index of target is: " << last << endl;

    if (first != -1 && last != -1)
    {
        cout << "Total Occurrences of target: " << (last - first + 1) << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }
}
