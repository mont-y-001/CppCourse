// 1.Naive Approach
// example=> count prime on leetcode

// 2.Sqrt Approach
// Non-Prime no. has always factor in b/w 2 to root n

// 3.Sieve of Erathosthenes
// Approach =>  2 se n tkk sabko true mark kar dete h then prime no. ke factor ko false mark kr denge

// Euclid Algo-> gcd(a,b) = gcd(a-b,b)   a>b
// gcd(a,b) = gcd(b-a,a)   b>a

// Fast Exponentiation ? doubt

#include <iostream>
#include <vector>
using namespace std;

vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++) // i<=n
    {
        if (sieve[i] == true)
        {
            int j = i * i; // j = i*2
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main()
{
    vector<bool> sieve = Sieve(25);
    for (int i = 0; i <= 25; i++)
    {
        if (sieve[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
