#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no.";
    cin>>n;

    for(int row=0;row<n;row++){
        //spaces
        for(int col = 0;col<n-row-1;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<2*row+1;col++){
            //if first char or if last char
            if(col == 0){
                //first char
                cout<<"* ";
            }
            else if(col == 2*row){
                //last char
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
   for(int row=0;row<n;row++){
    //spaces
    for(int col = 0;col<row;col++){
        cout<<" ";
    }
    //star
    for(int col=0;col<2*n-2*row-1;col++){
        //if first and last char
        if(col == 0 || col == 2*n - 2*row -2){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

}
