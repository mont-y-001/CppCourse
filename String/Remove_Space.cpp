#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st = "My Name is Mohit Yadav";
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ' ')
        {
            int j = i;
            while (j < st.size())
            {
                st[j] = st[j + 1];
                j++;
            }
        }
    }
    cout << st;
}