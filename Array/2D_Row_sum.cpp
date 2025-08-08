#include <iostream>
using namespace std;
bool findKey(int arr[3][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
            return false;
        }
    }
}

void printRowWiseSum(int arr[3][3], int rows, int cols)
{
    cout << "printing row-wise-sum: " << endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j]; // if we replace i,j then it will be called coloumn wise sum
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    cout << "enter elements of array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2-D Matrix is ready: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // printRowWiseSum(arr, row, col);
    int key = 35;
    if (findKey(arr, row, col, key))
    {
        cout << "Yes Key is Present" << endl;
    }
    else
    {
        cout << "No";
    }
    return 0;
}