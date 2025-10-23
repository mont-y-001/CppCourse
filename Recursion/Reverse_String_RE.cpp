#include <iostream>
#include <string>
using namespace std;
void ReverseString(string &str, int s, int end)
{
    // base case
    if (s >= end)
    {
        return;
    }

    // ek case solve karo
    swap(str[s], str[end]);

    ReverseString(str, s + 1, end - 1);
}
int main()
{
    string str;
    cout << "Enter string to reverse: " << endl;
    cin >> str;

    int s = 0;
    int end = str.length() - 1;
    ReverseString(str, s, end);
    cout << str;
}