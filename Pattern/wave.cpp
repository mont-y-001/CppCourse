#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any no:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 9; j++)
            {
                if (j % 4 == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "_";
                }
            }
        }
        else
        {
            for (int j = 1; j <= 9; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << "_";
                }
            }
        }
        cout << endl;
    }
}