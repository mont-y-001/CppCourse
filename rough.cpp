#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void ReverseCharArray(char name[])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;
    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[1000];

    // cin >> name[0] >> name[1] >> name[2];

    cout << "Enter Name: " << endl;
    // cin >> name;   //Mohit Yadav, (yadav) print nhi hoga due to delimeter means space/enter/tab hit hone pr cin/input lena band kr dega =>so we use "cin.getline" aur string.h library include krenge

    // cout << "Your Name is: " << name << endl;

    cin.getline(name, 1000);
    // cout << name << endl;

    cout << "Length of Name is: " << getLength(name) << endl;
    cout << "Length of Name is: " << strlen(name) << endl;

    ReverseCharArray(name);
    cout << "Your Name is: " << name << endl; // Array me pass by Reference hota h

    return 0;
}