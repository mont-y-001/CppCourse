#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines of pyramid you want ";
    cin>>n;
    int i =1;
    while(i<=n){
        int j = i;  //it is the main line
        while(j<=n){
            cout<<"*";
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;

    }
}