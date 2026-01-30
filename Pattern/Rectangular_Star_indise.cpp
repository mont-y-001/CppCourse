#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top border
    for (int i = 1; i <= 2 * n - 1; i++)
        cout << "*";
    cout << endl;

    // Middle
    for (int i = 2; i < n; i++)
    {
        cout << "*"; // left border

        // spaces before pyramid
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // pyramid stars
        for (int j = 1; j <= 2 * i - 3; j++)
            cout << "*";

        // spaces after pyramid
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        cout << "*"; // right border
        cout << endl;
    }

    // Bottom border
    for (int j = 1; j <= 2 * n - 1; j++)
        cout << "*";

    return 0;
}
