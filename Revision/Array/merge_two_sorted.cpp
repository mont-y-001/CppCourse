#include <iostream>
#include <vector>
using namespace std;
int Merged_Array(int arr1[], int arr2[], int size1, int size2, vector<int> &merge)
{
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            merge.push_back(arr1[i++]); // single line doing both work =>
            // merge.push_back(arr1[i]);
            // i = i+1
        }
        else
        {
            merge.push_back(arr2[j++]);
        }
    }
    while (i < size1)
    {
        merge.push_back(arr1[i++]);
    }
    while (j < size2)
    {
        merge.push_back(arr2[j++]);
    }
}
int main()
{
    int arr1[] = {-1, 2, 4, 6, 8, 12, 14, 15};
    int arr2[] = {1, 3, 5, 9, 11, 13, 19};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> merge;
    Merged_Array(arr1, arr2, size1, size2, merge);

    for (auto val : merge)
    {
        cout << val << " ";
    }
}