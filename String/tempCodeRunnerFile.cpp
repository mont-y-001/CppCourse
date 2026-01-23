#include <iostream>
using namespace std;
int main()
{
    string str = "mohit Yadav";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            if (i == 0)
            {
                str[i] = str[i] - 32;
            }
            if (str[i] == " ")
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }
    return str;
}
