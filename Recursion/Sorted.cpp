#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> &arr, int size, int i)
{
    if (i == size - 1)
    {
        return true;
    }
    if (arr[i] < arr[i - 1])
    {
        return false;
    }
    return isSorted(arr, size, i + 1);
}
int main()
{
    vector<int> arr{2, 4, 6, 8, 10, 15};
    int size = arr.size();
    int i = 1;
    bool ans = isSorted(arr, size, i);
    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}
