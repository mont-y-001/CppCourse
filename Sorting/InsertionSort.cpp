#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main()
{
    vector<int> arr = {9, 3, 13, 1, 4, 0};
    int n = arr.size();

    InsertionSort(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}

// bestcase = o(n)
// worst case = o(n^2)