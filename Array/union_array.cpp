#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 2, 45, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 54, 6, 5, 8, 56};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> ans;

    for (int i = 0; i < size1; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        ans.push_back(arr2[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}