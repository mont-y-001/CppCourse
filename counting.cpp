#include<iostream>
using namespace std;
    int counting(int n){
        for(int i = 1; i<n; i++){
            cout<<i<<" ";
        
        }
    }


int main(){

    int n;
    cout<<"Enter no.: ";
    cin>>n;
    cout<<counting(n);

}