#include <iostream>
#include <limits.h> //INT_MIN ko use krne ke liya h
using namespace std;
int main()
{
    int arr[] = {2, 3, 5, 45, 34, 6, 7, 54, 21, 43};
    int size = 10;
    int maxi = INT_MIN; // int min isliye liya h kyunki array me negative value bhi ho skti h too int min possible negative value leta h
    int mini = INT_MAX; // for min number
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi) // arr[i]<mini
        {
            maxi = arr[i];
        }
    }
    cout << "Mximum Number is: " << maxi << endl; // mini
}