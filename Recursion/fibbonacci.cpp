#include <iostream>
using namespace std;
int fib(int n)
{
    // base case
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    // recursive rel
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cout << "Enter No. to print position" << endl;
    cin >> n;
    int ans = fib(n);
    cout << n << "ith term is: " << ans;
    return 0;
}