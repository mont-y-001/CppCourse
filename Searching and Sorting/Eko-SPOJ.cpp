#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossibleSol(vector<long long int> &trees, long long int m, long long int mid)
{
    long long int woodCollected = 0;
    for (long long int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > mid)
        {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}
int maxSwelBladeHeight(vector<long long int> &trees, long long int m)
{
    long long int start = 0, ans = -1;
    long long int end = *max_element(trees.begin(), trees.end());
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossibleSol(trees, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    long long int n, m;
    cout << "Enter No. of tree and height that wants" << endl;
    cin >> n >> m;
    vector<long long int> trees(n);
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    cout << "Max Height that can be ecological: ]" << maxSwelBladeHeight(trees, m) << endl;

    return 0;
}