#include <iostream>
#include <limits.h>
using namespace std;
int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{
    int arr[3][3] = {{3, 21, 3}, {6, 9, 0}, {4, 2, 3}};
    int row = 3;
    int col = 3;

    int maxValue = getMax(arr, row, col);
    cout << "Max value is: " << maxValue;
}