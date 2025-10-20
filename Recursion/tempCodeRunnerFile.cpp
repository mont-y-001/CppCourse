#include <iostream>
using namespace std;
void Print_SubSequence(string str, string output, int i, int size)
{
    if (i >= size)
    {
        cout << output << " " << endl;
        return;
    }

    // Exclude
    Print_SubSequence(str, output, i + 1, size);

    // Include
    output.push_back(str[i]);
    Print_SubSequence(str, output, i + 1, size);
}
int main()
{
    string str = "abc";
    int size = str.length();
    string output = "";
    int i = 0;
    Print_SubSequence(str, output, i, size);
}