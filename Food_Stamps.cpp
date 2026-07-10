#include <iostream>
#include <vector>
#include <queue>
using namespace std;

long long heapSolution(int n, int m, vector<int>& v, vector<int>& d) {

    priority_queue<pair<int, int>> pq;

    // {value, index}
    for (int i = 0; i < n; i++) {
        pq.push({v[i], i});
    }

    long long ans = 0;

    while (m > 0 && !pq.empty()) {

        auto curr = pq.top();
        pq.pop();

        int value = curr.first;
        int index = curr.second;

        if (value <= 0)
            break;

        ans += value;

        int nextValue = value - d[index];

        if (nextValue > 0) {
            pq.push({nextValue, index});
        }

        m--;
    }

    return ans;
}

int main() {
    int n = 3, m = 5;
    vector<int> v = {5, 7, 9};
    vector<int> d = {2, 4, 6};

    cout << heapSolution(n, m, v, d);
}