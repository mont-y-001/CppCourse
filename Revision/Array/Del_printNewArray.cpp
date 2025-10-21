#include <iostream>
#include <vector>
using namespace std;
void deleteElement(int arr[], vector<int> &newArr, int size, int del)
{
    for (int i = 0; i < size; i++)
    {
        if (del != arr[i])
        {
            newArr.push_back(arr[i]);
        }
    }
}
int main()
{
    int arr[] = {2, 4, 7, 4, 1, 8, 9};
    int del = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> newArr;
    deleteElement(arr, newArr, size, del);
    for (auto val : newArr)
    {
        cout << val << " ";
    }
    return 0;
}