#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 9; j <= i; j = i + 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
11 1 2 1 1 3 3 1