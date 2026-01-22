#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "_";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}