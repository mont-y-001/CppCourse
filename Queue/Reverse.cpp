#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(queue<int> &q)
{
    stack<int> st;
    // step:1 ->Hum Queue se stack me insert krenge elements ko
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }
    // step:2 ->Hum stack se queue me insert krenge elements ko
    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    reverse(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}