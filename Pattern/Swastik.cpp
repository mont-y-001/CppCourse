#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any odd number:" << endl;
    cin >> n;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*";
            }
            else if (i <= mid && j == 1)
            {
                cout << "*";
            }
            else if (i > mid && j == n)
            {
                cout << "*";
            }
            else if (j > mid && i == 1)
            {
                cout << "*";
            }
            else if (j < mid && i == n)
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