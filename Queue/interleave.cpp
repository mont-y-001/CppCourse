#include <iostream>
#include <queue>
using namespace std;

class Solution
{
public:
    void rearrangeQueue(queue<int> &q)
    {
        if (q.empty())
            return;

        int n = q.size();
        int k = n / 2;

        queue<int> q2;

        // Step 1: First half to q2
        for (int i = 0; i < k; i++)
        {
            q2.push(q.front());
            q.pop();
        }

        // Step 2: Interleave
        while (!q2.empty() && !q.empty())
        {
            q.push(q2.front());
            q2.pop();

            q.push(q.front());
            q.pop();
        }

        // Step 3: If odd, middle element already at front → move to back
        if (n % 2 != 0)
        {
            q.push(q.front());
            q.pop();
        }
    }
};

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    Solution obj;
    obj.rearrangeQueue(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
