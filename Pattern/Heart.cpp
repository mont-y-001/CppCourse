#include <iostream>
using namespace std;

int main()
{
    int i, j;

    // Upper part
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3 - i; j++)
            cout << " ";

        for (j = 1; j <= 2 * i; j++)
            cout << "*";

        for (j = 1; j <= 5 - 2 * i; j++)
            cout << " ";

        for (j = 1; j <= 2 * i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower part
    for (i = 7; i >= 1; i--)
    {
        for (j = 1; j <= 7 - i; j++)
            cout << " ";

        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
