#include <iostream>
using namespace std;
int Factorial(int n)
{
    if (n == 1)
        return 1;

    int ChotiProblem = Factorial(n - 1);
    int BiggerProblem = n * ChotiProblem;
    return BiggerProblem;
}
int main()
{
    int n;
    cout << "Enter any no.";
    cin >> n;
    int ans = Factorial(n);
    cout << "Factorial of given num: " << ans;
    return 0;
}
