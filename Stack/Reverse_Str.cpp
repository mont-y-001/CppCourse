#include <iostream>
#include <Stack>
using namespace std;
int main()
{
    string str = "Mohit";
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}