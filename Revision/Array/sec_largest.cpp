#include <iostream>
#include <climits>
using namespace std;

int first = INT_MIN;
int sec = INT_MIN;
int Sec_Largest(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            sec = first;
            first = arr[i];
        }
        else if (arr[i] > sec && arr[i] != first)
        {
            sec = arr[i];
        }
    }
    return sec;
}
int main()
{
    int arr[] = {2, 12, 3, 1, 131, 43, 4, 43, 76};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = Sec_Largest(arr, size);
    cout << ans;
    return 0;
}