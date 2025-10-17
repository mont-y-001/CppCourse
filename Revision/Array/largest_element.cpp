#include <iostream>
#include <climits>
using namespace std;
int largest(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {2, 42, 12, 14, 23, 32, 0};
    int size = 7;

    int ans = largest(arr, size);
    cout << "Largest element is: " << ans;
    return 0;
}