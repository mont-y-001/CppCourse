#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int Solve(vector<int> &arr, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = Solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }
    return mini;
}
int main()
{
    vector<int> arr{5, 1, 5};
    int target = 11;
    int ans = Solve(arr, target);
    cout << "Answer is: " << ans;
    return 0;
}