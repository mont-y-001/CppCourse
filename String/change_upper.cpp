#include <iostream>
using namespace std;

int main()
{
    string str = "mohit yadav";

    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] = str[0] - 32;
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] = str[i + 1] - 32;
        }
    }

    cout << str;
}
