#include<iostream>
using namespace std;
  
    int Ap(int n){
       cout<< 3*n+7;
        
    }
int main(){

    int n;
    cout<<"Enter nth term: ";
    cin>>n;

    cout<<"nth term is"<<Ap(n);
    return 0;


}