#include <iostream>
#include <string>
// #include <unordered_set>
using namespace std;
string disemovowel(const string &str)
{
    // unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    string result = "";
    for (char c : str)
    {

        // if (vowels.find(c) == vowels.end()) { // vowel.end()->matlab element nahi mila, yaha vowel nahi hai.
        //     result += c;
        // }
        if ('a' != c && 'e' != c && 'i' != c && 'o' != c && 'u' != c && 'A' != c && 'E' != c && 'I' != c && 'O' != c && 'U' != c)
        {

            result = result + c;
        }
    }
    return result;
}
int main()
{
    string s = "This website is for lOsers LOL!";
    cout << disemovowel(s) << endl;

    return 0;
}