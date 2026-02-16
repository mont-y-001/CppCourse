#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int> arr, int k, int n)
{
    int windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxi = windowSum;

    for (int i = k; i < n; i++)
    {
        windowSum = windowSum - arr[i - k] + arr[i];
        maxi = max(maxi, windowSum);
    }

    return maxi;
}

int main()
{
    vector<int> arr = {2, 3, 1, 8, 7, 5, 4};
    int k = 3;

    cout << maxSum(arr, k, arr.size());
}
