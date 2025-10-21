#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 7, 5, 6, 5, 7, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = size - 1;
    bool isPalindrome = true;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            isPalindrome = false;
            break;
        }
        s++;
        e--;
    }
    if (isPalindrome)
    {
        cout << "Given arrya is palindrome: " << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
}