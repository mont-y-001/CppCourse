#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 0, 1, 0, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i <= end) // changed from i != end to i <= end
    {
        if (arr[i] == 0) // fixed comparison
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end], arr[i]);
            end--;
            // don't increment i here because swapped value might still be 1
        }

        // Debug output (optional)
        for (auto val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
