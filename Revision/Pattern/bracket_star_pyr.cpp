#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0 && n < 100)
    {
        for (int i = 0; i < n; i++)
        {
            for (int s = 0; s < n - i; s++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "(";
            }
            cout << "*";
            for (int k = 0; k <= i; k++)
            {
                cout << ")";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
}