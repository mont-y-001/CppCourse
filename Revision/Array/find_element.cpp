#include <iostream>
using namespace std;
bool search_element(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {23, 34, 32, 54, 6, 76, 98};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 89;
    int ans = search_element(arr, element, size);
    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found";
    }
}