#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter any No.: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}