#include <iostream>
using namespace std;
bool SortedorNot(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {2, 3, 3, 5, 5, 8, 12, 15, 21, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool ans = SortedorNot(arr, size);
    if (ans)
    {
        cout << "Array is Sorted:" << endl;
    }
    else
    {
        cout << "Array is Unsorted:" << endl;
    }
}