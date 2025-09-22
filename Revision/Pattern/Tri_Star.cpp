#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * "; // for Number just do j or j+1 ;
        }
        cout << endl;
    }
}