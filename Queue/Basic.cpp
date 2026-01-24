#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);

    cout << "Size of Queue is: " << q.size() << endl;
    cout << "Front of queue is: " << q.front() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}