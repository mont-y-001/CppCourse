#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: "; // Fixed the missing semicolon
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lower case: " << ch << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Upper case: " << ch << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Numeric: " << ch << endl;
    }
    else {
        cout << "None" << endl;
    }

    return 0;
}
