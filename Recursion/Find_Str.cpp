#include <iostream>
#include <vector>
using namespace std;
void Find_Char(string &str, int &size, int i, int key, vector<int> &ans)
{
    if (i > size)
    {
        return;
    }
    if (str[i] == key)
    {
        ans.push_back(i);
        // cout << "Found on position: " << i << endl;
    }
    return Find_Char(str, size, i + 1, key, ans);
}
int main()
{
    string str = "Mohit Yadav";
    int size = str.length();
    int i = 0;
    char key = 'z';
    vector<int> ans;
    Find_Char(str, size, i, key, ans);

    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}