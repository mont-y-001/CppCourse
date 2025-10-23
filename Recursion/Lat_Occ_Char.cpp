// We have solved right to left approach,we can also solve using left to Right approch
#include <iostream>
#include <string>
using namespace std;
void LastOccurance(string str, char ch, int &ans, int i)
{
    // base case
    if (i < 0)
    {
        return;
    }
    if (str[i] == ch)
    {
        ans = i;
        return;
    }
    LastOccurance(str, ch, ans, i - 1);
}
int main()
{
    string str = "abcddedgh";
    char ch = 'a';
    int i = str.length();
    int ans = -1;
    LastOccurance(str, ch, ans, i);
    cout << "Answer is: " << ans;
    return 0;
}
