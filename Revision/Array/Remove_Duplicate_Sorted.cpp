#include <iostream>
using namespace std;

int Remove_Duplicate(int arr[], int size)
{
    if (size == 0)
        return 0;

    int j = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // New size after removing duplicates
}

int main()
{
    int arr[] = {2, 4, 4, 7, 10, 13, 13, 16, 19, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = Remove_Duplicate(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
