#include <iostream>
using namespace std;
void reverseArray(int arr[], int size, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(arr[s], arr[e]);

    reverseArray(arr, size, s + 1, e - 1);
}
int main()
{
    int arr[] = {2, 4, 3, 1, 1, 23, 56, 78, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;

    reverseArray(arr, size, s, e);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}