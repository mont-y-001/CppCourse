#include <iostream>
#include <algorithm>
using namespace std;
void RemoveSpace(char ch[])
{
    int i = 0;
    int j = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] != ' ')
        {
            ch[j] = ch[i];
            j++;
        }
        i++;
    }
    ch[j] = '\0';
}
int main()
{
    char ch[100];
    cout << "Enter any sentence: " << endl;
    cin.getline(ch, 100);

    RemoveSpace(ch);
    cout << ch;
}