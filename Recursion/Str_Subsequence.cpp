#include <iostream>
#include <Vector>
using namespace std;
void Print_SubSequence(string str, string output, int i, int size, vector<string> &v)
{
    if (i >= size)
    {
        v.push_back(output); // to store subsequence
        // cout << output << " " << endl;
        return;
    }

    // Exclude
    Print_SubSequence(str, output, i + 1, size, v);

    // Include
    output.push_back(str[i]);
    Print_SubSequence(str, output, i + 1, size, v);
}
int main()
{
    string str = "abc";
    int size = str.length();
    string output = "";
    vector<string> v;
    int i = 0;
    Print_SubSequence(str, output, i, size, v);

    for (auto val : v)
    {
        cout << val << " " << endl;
    }
    cout << "Lenght of V: " << v.size(); // Empty string also print but it doesn't shown so,we using .size to find size of vector v
}