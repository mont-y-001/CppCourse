#include <iostream>
#include <Stack>
using namespace std;
void PrintMid(stack<int> &s, int &totalSize)
{
    if (s.size() == 0)
    {
        cout << "There is no element: " << endl;
        return;
    }
    if (s.size() == totalSize / 2 + 1)
    {
        cout << "Middle Element is:" << s.top() << endl;
        return;
    }
    int temp = s.top();
    s.pop();

    // recursive call
    PrintMid(s, totalSize);

    s.push(temp);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    int totalSize = s.size();
    PrintMid(s, totalSize);
}