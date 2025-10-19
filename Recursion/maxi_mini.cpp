#include <iostream>
#include <climits>
using namespace std;

int print_maxi(int arr[], int size, int i, int maxi)
{
    if (i >= size)
    {
        return maxi;
    }
    if (arr[i] >= maxi)
    {
        maxi = arr[i];
    }
    return print_maxi(arr, size, i + 1, maxi);
}
int main()
{
    int arr[] = {23, 12, 4, 323, 1, 56, 54};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int maxi = INT_MIN;
    int ans = print_maxi(arr, size, i, maxi);
    cout << ans;
}