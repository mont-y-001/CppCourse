#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr1{2, 4, 3, 3, 8, 86};
    vector<int> arr2{6, 3, 2, 43, 7, 86};
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];

        for (int i = 0; i < arr2.size(); i++)
        {
            if (element == arr2[i])
            { // mark kr do jo check hogya h otherwise agr dono array me 2 sameno. honge too vo 4 baar print krega
                arr2[i] = -1;

                ans.push_back(element);
            }
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
}