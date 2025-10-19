#include <iostream>
using namespace std;

int Two_Power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * Two_Power(n - 1);
}
int main()
{
    int n;
    cout << "Enter no.: " << endl;
    cin >> n;
    int ans = Two_Power(n);
    cout << ans;
    return 0;
}