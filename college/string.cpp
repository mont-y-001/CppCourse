#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    int len = name.length();
    cout << "Total characters (including spaces): " << len;

    return 0;
}
