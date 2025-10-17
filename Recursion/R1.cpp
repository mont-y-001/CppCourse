// Recursion -> When  a function calls itself
// Bigger Problem sol -> depend -> choti & same type ki problem pr

// Reverse Counting
#include <iostream>
using namespace std;
void PrintReverse(int n)
{
    // Tail Recursion

    if (n == 0) // Base Condition
        return;
    // Stack concept of storing main,function,call
    cout << n << endl;   // Processing
    PrintReverse(n - 1); // Recursive Call/Relation
}
int main()
{
    int n;
    cout << "Enter any Number" << endl;
    cin >> n;
    PrintReverse(n);
    return 0;
}
