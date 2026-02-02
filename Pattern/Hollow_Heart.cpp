#include <iostream>
using namespace std;

int main()
{

    int n = 6;

    // Top part
    for (int i = n / 2; i <= n; i += 2)
    {

        // left spaces
        for (int j = 1; j < n - i; j += 2)
            cout << " ";

        // left stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        // middle spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // right stars
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom part
    for (int i = n; i >= 1; i--)
    {

        // left spaces
        for (int j = i; j < n; j++)
            cout << " ";

        // stars
        for (int j = 1; j <= (i * 2) - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
