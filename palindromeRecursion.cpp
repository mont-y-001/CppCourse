#include<iostream>
using namespace std;

        bool palindrome(string &str, int i, int j) {
    // Base case
    if (i >= j) {
        return true;
    }

    // Check if characters at positions i and j are the same
    if (tolower(str[i]) != tolower(str[j])) {
        return false;
    }
    // Move towards the middle
    return palindrome(str, i + 1, j - 1);
}
int main(){

    string str = "32Bookoob23";
    bool ans = palindrome(str, 0, str.length()-1);
    if(ans){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It's not a palindrome:";
    }
        
        return 0;


}