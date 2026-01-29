// **********
//  ********
//   ******
//    ****
//     **
//     **
//    ****
//   ******
//  ********
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any no.: " << endl;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}