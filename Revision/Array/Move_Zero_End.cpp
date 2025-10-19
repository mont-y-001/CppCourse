#include <iostream>
using namespace std;
void moveZeroes(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 4, 2, 0, 3, 0, 0, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZeroes(arr, size);
}