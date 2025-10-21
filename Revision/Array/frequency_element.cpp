#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (auto val : freq)
    {
        cout << val.first << " -> " << val.second << endl;
    }
    return 0;
}