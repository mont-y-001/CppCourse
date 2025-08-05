#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }
        else
        {
            numOne++;
        }
    }
    cout << "No. of Zero: " << numZero << endl;
    cout << "No. of One: " << numOne << endl;
}