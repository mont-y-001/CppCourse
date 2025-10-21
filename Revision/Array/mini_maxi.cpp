#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int mini = INT_MAX;
    int arr[] = {-6, 2, 1, 5, -9, 3, 68, 2, -2, -5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    cout << "MIN element is : " << mini;
}