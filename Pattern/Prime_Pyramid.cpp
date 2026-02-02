#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any no.: " << endl;
    cin >> n;
    int count = 0;
    int isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (isPrime())
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
}