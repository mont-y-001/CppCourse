#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines of pattern: ";
    cin>>n;
    int i = 1;
    while(i<=n){
    int j = 1;
        while(j<=n){
            cout<<"*";     //we can print no. using i instead of *
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        

    }
}