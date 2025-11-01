#include <iostream>
#include <vector>
using namespace std;
void printSubarray(vector<int> &nums, int s, int end)
{
    // base case
    if (end == nums.size())
    {
        return;
    }
    for (int i = s; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // Reursion
    printSubarray(nums, s, end + 1);
}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    int s = 0;
    int end = 0;
    printSubarray(nums, s, end);
}