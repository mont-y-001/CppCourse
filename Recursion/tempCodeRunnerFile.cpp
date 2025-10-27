#include <iostream>
using namespace std;
int partition(int arr[], int s, int end)
{
    int pivotIndex = s;
    int pivotElement = arr[s];

    int count = 0;
    for (int i = s + 1; i < end; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // left me chote aur right me bade
    int i = s;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
            i++;
    }
    while (arr[j] > pivotElement)
    {
        j--;
    }

    // 2case ho skte h:a)you find the element to swap
    // b)no need to swap

    if (i < pivotIndex && j > pivotIndex)
    {
        swap(arr[i], arr[j]);
    }
    return pivotIndex;
}

void QuickSort(int arr[], int s, int end)
{
    // Base Case
    if (s >= end)
    {
        return;
    }

    // partition
    int p = partition(arr, s, end);

    // left
    QuickSort(arr, p - 1, end);

    // right
    QuickSort(arr, p + 1, end);
}
int main()
{
    int arr[] = {8, 3, 2, 10, 4, 20, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int end = size - 1;
    QuickSort(arr, s, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}