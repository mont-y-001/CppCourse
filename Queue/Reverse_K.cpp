#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void ReverseKElement(queue<int> &q, int K)
{
    stack<int> st;
    int count = 0;
    int n = q.size();
    // step1: K elements ko uthakar stack me push kr do
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        st.push(temp);
        count++;

        if (count == K)
        {
            break;
        }
    }
    // Step2:stack elements ko vaps queue me push kr do
    while (!st.empty())
    {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    // step:3->(n-k) elements pop kro push kr do dubara usi queueue me
    count = 0;
    while (!q.empty() && n - K != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        if (count == n - K)
        {
            break;
        }
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    ReverseKElement(q, 1);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}