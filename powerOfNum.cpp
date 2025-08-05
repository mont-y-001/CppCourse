#include<iostream>
using namespace std;

int Power(int num1, int num2){

    int ans = 1;

    for(int i=1;i<=num2;i++){
        ans = ans*num1;


    }
    return ans;


}

int main(){


    int a;
    cout<<"Enter a: ";
    cin>>a;
    
    int b;
    cout<<"Enter b: ";
    cin>>b;

     int answer =  Power(a, b);
    cout<<answer<<endl;

    int c, d;
    cout<<"Enter again: ";
    cin>>c>>d;
     answer =  Power(c, d);
    cout<<answer<<endl;

    

    return 0 ;
  

}