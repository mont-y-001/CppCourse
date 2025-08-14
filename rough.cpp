#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
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
    int arr[] = {2, 3, 5, 7, 10, 12, 15, 19};
    int size = 8;
    int target = 190;

    int indexofTarget = binarySearch(arr, size, target);
    if (indexofTarget == -1)
    {
        cout << "Target Not Found" << endl;
    }
    else
    {
        cout << "Target Found at " << indexofTarget << "  INDEX" << endl;
    }
    return 0;
}
