#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "enter value of a: ";
    cin >> a;
    int ans = 0;
    int i = 0;
    while (a != 0)
    {
        int digit = a % 10;
        if (digit == 1)
        {
            ans = digit * pow(2, i) + ans;
        }
        a = a / 10;
        i++;
    }

    int b;
    cout << "enter value of b: ";
    cin >> b;
    int ans1 = 0;
    int l = 0;
    while (b != 0)
    {
        int digit1 = b % 10;
        if (digit1 == 1)
        {
            ans1 = digit1 * pow(2, l) + ans1;
        }
        b = b / 10;
        l++;
    }

    int num = ans + ans1;

    int place = 1;
    int main = 0;
    while (num != 0)
    {
        int bit = num & 1;
        main = main + bit * place;
        num = num >> 1;
        place = place * 10;
    }
    cout << main;
}