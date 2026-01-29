// *********
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *********
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENter any Number: " << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 2 * i - 1 || j == 1)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == n || j == 2 * i - 1 || j == 1)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
