#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool Palindrome(char Name[])
{
    int i = 0;
    int n = strlen(Name);
    int j = n - 1;

    while (i <= j)
    {
        if (Name[i] != Name[j])
        {
            return false;
        }
        else
        {

            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char Name[100];
    cin >> Name;
    bool ans = Palindrome(Name);
    if (ans)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}