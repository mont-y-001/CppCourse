#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<< j+1 ;
    //     }
    //     cout<<endl;
    // }


    int n;
    cout<<"enter any no";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}