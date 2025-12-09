#include <iostream>
using namespace std;
void counter()
{
    static int x = 0;
    x++;
    cout << "Counter value is: " << x << endl;
}
int main()
{
    // Keeps its value between function calls.
    counter();
    counter();
    counter();
}
