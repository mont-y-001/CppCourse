#include <iostream>
#include <limits.h>
using namespace std;

void TransposeMat(int arr[][3], int row, int col, int transpose[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}
void PrintArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {{3, 21, 3}, {6, 9, 0}, {4, 2, 3}};
    int row = 3;
    int col = 3;
    int transpose[3][3];

    cout << "Your 2d Matrix is here:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    TransposeMat(arr, row, col, transpose);
    cout << "Printing Transposed Matrix: " << endl;
    PrintArray(transpose, row, col);
}