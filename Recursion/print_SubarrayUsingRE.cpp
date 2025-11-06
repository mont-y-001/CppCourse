#include <iostream>
#include <vector>
using namespace std;

void printSubarray(vector<int> &nums, int s, int end)
{
    // base case for end pointer
    if (end == nums.size())
        return;

    // print the current subarray
    for (int i = s; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // recursion to extend the current subarray
    printSubarray(nums, s, end + 1);
}

void printAllSubarrays(vector<int> &nums, int s)
{
    // base case for start pointer
    if (s == nums.size())
        return;

    // print all subarrays starting from index s
    printSubarray(nums, s, s);

    // recursion for next start index
    printAllSubarrays(nums, s + 1);
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    printAllSubarrays(nums, 0);
    return 0;
}
