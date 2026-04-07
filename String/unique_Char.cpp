#include<iostream>
using namespace std;

int main(){
    string word;
    cout << "Enter any word: ";
    cin >> word;

    int freq[256] = {0};

    // Count frequency
    for(char ch : word){
        freq[ch]++;
    }

    int count = 0;

    // Count non-repeating characters
    for(char ch : word){
        if(freq[ch] == 1){
            count++;
        }
    }

    cout << "Non-repeating characters count: " << count;

}