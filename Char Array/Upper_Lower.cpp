#include <iostream>
#include <string.h>
using namespace std;
void ConvertIntoUpper(char Name[])
{
    int n = strlen(Name);

    for (int i = 0; i < n; i++)
    {
        if (Name[i] >= 'a' && Name[i] <= 'z')
        {

            Name[i] = Name[i] - 'a' + 'A';
        }
    }
}
int main()
{
    char Name[100] = "MONty Yadav";
    ConvertIntoUpper(Name);
    cout << Name;
}