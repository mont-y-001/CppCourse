#include<iostream>
using namespace std;

    bool is_even(int a){
        if(a&1){
        return 0;
    }
    return 1;
    }



int main(){
    int num;
    cout<<"enter any no. ";
    cin>>num;

    if(is_even(num)){
        cout<<"No.is even:"<<endl;
    }
    else{
        cout<<"No. is odd";
    }
    return 0;
}
