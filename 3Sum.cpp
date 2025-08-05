#include <iostream>
#include <algorithm>

using namespace std;

void findtriplet(int arr[], int nums) {
    sort(arr, arr + nums);  // Sort the array

    for (int i = 0; i < nums - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;  // Skip duplicate elements for the current position

        int j = i + 1;
        int k = nums - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0) {
                cout << "Triplet: " << arr[i] << " " << arr[j] << " " << arr[k] << endl;

                while (j < k && arr[j] == arr[j + 1]) j++;  // Skip duplicates for the second element
                while (j < k && arr[k] == arr[k - 1]) k--;  // Skip duplicates for the third element

                j++;
                k--;
            } else if (sum < 0) {
                j++;
            } else {
                k--;
            }
        }
    }
}

int main() {
    int nums;
    cout << "Enter the number of elements: ";
    cin >> nums;
    
    int arr[nums];
    cout << "Enter the elements: ";
    for (int i = 0; i < nums; i++) {
        cin >> arr[i];
    }

    cout << "Triplets are: " << endl;
    findtriplet(arr, nums);

    return 0;
}
