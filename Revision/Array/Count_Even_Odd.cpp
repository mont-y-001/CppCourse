#include <iostream>
using namespace std;

int Count_Even_Odd(int arr[], int n, int &Even, int &Odd)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
}
int main()
{
    int Even = 0;
    int Odd = 0;
    int n;
    cout << "Enter no." << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Count_Even_Odd(arr, n, Even, Odd);
    cout << "Even No. :" << Even << endl;

    cout << "Odd No. :" << Odd;
}