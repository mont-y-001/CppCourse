#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any no." << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "|*|";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}