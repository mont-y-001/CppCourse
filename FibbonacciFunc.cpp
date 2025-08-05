#include<iostream>
using namespace std;

int Fibbonacci(int n){
    int a = 0;
    int b = 1;

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int num = 0;
    for(int i = 2; i<n; i++){
        num = a+b;
        a = b;
        b = num;
      
    }
   return num;
}

int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    cout<<Fibbonacci(n);
    
}