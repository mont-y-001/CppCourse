#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> unionArray(vector<int> & nums1, vector<int> &nums2){
        int i = 0, j = 0;
vector<int> ans;

while (i < nums1.size() && j < nums2.size())
{

    // Skip duplicates in nums1
    if (i > 0 && nums1[i] == nums1[i - 1])
    {
        i++;
        continue;
    }
    // Skip duplicates in nums2
    if (j > 0 && nums2[j] == nums2[j - 1])
    {
        j++;
        continue;
    }

    if (nums1[i] < nums2[j])
    {
        ans.push_back(nums1[i]);
        i++;
    }
    else if (nums2[j] < nums1[i])
    {
        ans.push_back(nums2[j]);
        j++;
    }
    else
    {
        // Equal elements → add only once
        ans.push_back(nums1[i]);
        i++;
        j++;
    }
}

// Add remaining elements of nums1
while (i < nums1.size())
{
    if (i == 0 || nums1[i] != nums1[i - 1])
        ans.push_back(nums1[i]);
    i++;
}

// Add remaining elements of nums2
while (j < nums2.size())
{
    if (j == 0 || nums2[j] != nums2[j - 1])
        ans.push_back(nums2[j]);
    j++;
}

return ans;
}
}
;
