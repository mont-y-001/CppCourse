#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 6, 4, 8, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int total = (size + 1) * (size + 2) / 2;
    int missing = total - sum;
    cout << "Missing No. is: " << missing;
    return 0;
}