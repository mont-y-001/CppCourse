// 2D Array actual me ek linear array hi memory me store hota h but hum visualise aese krte h jaise vo 2d HO=> FORMULA TO access linear array index no.-> [(C*i)+j]
#include <iostream>
using namespace std;
int main()
{
    // declare 2D Array
    int arr1[3][3];

    // initialization
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {2, 6, 8}};

    // Row-wise Print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    // Col-wise Print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[j][i];
    //     }
    //     cout << endl;
    // }

    // Input
    int arr2[4][3];
    int row = 4;
    int col = 3;

    cout << "Enter element:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    // Output
    cout << "Your output is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // cout << arr[2][1] << endl;     //Print any element of array
}