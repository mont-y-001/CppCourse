#include <iostream>
using namespace std;
void printPermutation(string &str, int i, int size)
{
    // base case
    if (i >= size)
    {
        cout << str << " ";
        return;
    }

    // swapping
    for (int j = i; j < size; j++)
    {
        // swap
        swap(str[i], str[j]);
        // recursive call
        printPermutation(str, i + 1, size);
        // backtracking
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "xyza";
    int size = str.length();
    int i = 0;
    printPermutation(str, i, size);
}