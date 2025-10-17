#include <iostream>
#include <climits>
using namespace std;

void print_arr(int ans[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}
void rev_arr(int arr[], int size)
{
    int ans[size];
    for (int i = size - 1; i >= 0; i--)
    {
        ans[size - i - 1] = arr[i];
    }
    print_arr(ans, size);
}

int main()
{
    int arr[] = {2, 12, 3, 1, 131, 34, 65, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    rev_arr(arr, size);

    return 0;
}