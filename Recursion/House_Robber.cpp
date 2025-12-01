#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int robHelper(vector<int> &nums, int i)
{
    if (i >= nums.size())
    {
        return 0;
    }
    int robAmt1 = nums[i] + robHelper(nums, i + 2);
    int robAmt2 = 0 + robHelper(nums, i + 1);
    return max(robAmt1, robAmt2);
}
int main()
{
    vector<int> nums = {2, 1, 1, 2};
    int maxAmount = robHelper(nums, 0);
    cout << "Maximum amount that can be robbed: " << maxAmount << endl;
}