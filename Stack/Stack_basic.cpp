#include <iostream>
#include <Stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    cout << "Size of stack: " << st.size() << endl;
    cout << "stack top: " << st.top() << endl;
    if (!st.empty())
    {
        cout << "Not empty";
    }
    else
    {
        cout << "Empty";
    }
}
