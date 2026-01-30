#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // print leading js
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // print stars
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
