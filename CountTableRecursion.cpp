#include<iostream>
using namespace std;
       
       int table(int n){
       //base case
       if(n == 1){
        return n;
       }
       int out = n * table(n-1);
       return out; 
     

       }

int main(){
    int n;
    cout<<"enter no. here: ";
    cin>>n;

    int ans = table(n);
    cout<<ans;
 }