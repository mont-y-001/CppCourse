#include<iostream>
using namespace std;
  
    bool is_Prime(int n){
        if(n==1){
            return true; //true = 1
        }

        for(int i =2; i<n; i++){
            if(n%i==0){
                return 0;   //false = 0
            }
        }
            return 1;

    }
int main(){

    int n;
    cout<<"Enter no. to check Prime or not: ";
    cin>>n;
    if(is_Prime(n)){
        cout<<"The given no. is prime"<<endl;
    }
    else{
        cout<<"The given no. is not a prime no."<<endl;
    }

    int a;
    cin>>a;
       if(is_Prime(a)){
        cout<<"The given no. is prime"<<is_Prime(a);
    }
    else{
        cout<<"The given no. is not a prime no."<<is_Prime(a);
    }
    

}