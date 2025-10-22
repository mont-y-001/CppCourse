#include <iostream>
#include <limits.h>
using namespace std;
void Solve(int arr[], int &maxi, int sum, int i, int n)
{
    // Base Case
    if (i >= n)
    {
        // Maxi Update
        maxi = max(maxi, sum);
        return;
    }

    // Include
    Solve(arr, maxi, sum + arr[i], i + 2, n);

    // Exclude
    Solve(arr, maxi, sum, i + 1, n);
}
int main()
{
    int arr[] = {2, 1, 4, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;
    Solve(arr, maxi, sum, i, n);
    cout << "Maximum sum is: " << maxi;
    return 0;
}