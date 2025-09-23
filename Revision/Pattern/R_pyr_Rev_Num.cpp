// Important One
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j >= 5 - i; j--) // Most Important
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
