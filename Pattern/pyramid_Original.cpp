#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any no:";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // space
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        // star
        for (int col = 0; col < 2 * row - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}