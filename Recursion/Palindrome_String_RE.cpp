#include <iostream>
using namespace std;
bool Check_Palindrome(string str, int s, int end)
{
    // base case
    if (s > end)
    {
        return true;
    }
    if (str[s] != str[end])
    {
        return false;
    }

    Check_Palindrome(str, s + 1, end - 1);
}
int main()
{
    string str;
    cout << "Enter string to check palindrome or not: " << endl;
    cin >> str;

    int s = 0;
    int end = str.length() - 1;

    bool ans = Check_Palindrome(str, s, end);
    if (ans)
    {
        cout << "It's Plaindrome: " << endl;
    }
    else
    {
        cout << "Not Plaindrome: " << endl;
    }
}