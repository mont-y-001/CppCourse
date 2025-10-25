#include <iostream>
using namespace std;
void merge(int *arr, int s, int mid, int end)

{

    // length di h
    int len1 = mid - s + 1;
    int len2 = end - mid;

    // len1 length ka left array create kiya h
    int *left = new int[len1];
    int *right = new int[len2];

    // Copy Values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Rest Values if remains
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}
void mergeSort(int *arr, int s, int end)
{
    // base case
    if (s >= end)
    {
        return;
    }

    // Divide krenge array ko half-half me
    int mid = s + (end - s) / 2;

    // left-part
    mergeSort(arr, s, mid);

    // right-part
    mergeSort(arr, mid + 1, end);

    // Abdono left and right ko merge kr denge merge function ki help se
    merge(arr, s, mid, end);
}
int main()
{
    int arr[] = {5, 3, 2, 9, 7, 4, 14, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int end = size - 1;

    mergeSort(arr, s, end);

    cout << "Value are here: ";
    // Print Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}