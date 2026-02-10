#include <iostream>
#include <vector>
using namespace std;
int maxSum(vector<int> arr, int k, int n)
{
    int MSum = 0;
    for (int i = 0; i < k; i++)
    {
        MSum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i + 3 > n)
        {
            break;
        }
        int currSum = MSum - arr[i] + arr[i + 3];
        int maxi = max(currSum, MSum);
    }
    return maxi;
}
int main()
{
    vector<int> arr = {2, 3, 1, 8, 7, 5, 4};
    int n = arr.size();
    int k = 3;
    maxSum(arr, k, n);
}