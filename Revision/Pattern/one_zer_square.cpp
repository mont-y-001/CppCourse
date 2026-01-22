#include <iostream>
using namespace std;
int main()
{
    int N = 5;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i % 2 != 0)
            {
                cout << (j + 1) % 2 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}