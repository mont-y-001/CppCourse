#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++) // if i = 0 lenge  then  j < n - i - 1 kyunki agar j < n-1 krenge too j<n-0 -> j+1 ,loop ke bhar chlega jo ki possible nhi h
    {
        // bool swapped = false;
        for (int j = 0; j < n - i; j++) // j < n - i - 1  lena padega
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // swapped = true;
            }
        }
        // if (swapped == false)
        // {
        //     break;
        // }
    }
}
int main()
{
    int arr[6] = {9, 3, 13, 1, 4, 0};
    int n = 6;
    BubbleSort(arr, n);

    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// best case  => o(n),when no sorting take place so i have comment out bool swapped
// worst case alsways => o(n^2)