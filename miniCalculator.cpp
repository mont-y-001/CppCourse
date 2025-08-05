#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a no.: ";
    cin>>a;

    int b;
    cout<<"Enter a no.: ";
    cin>>b;
     
    char sign; 
    cout<<"Enter operation which would you want to perform: ";
    cin>>sign;

    switch(sign){
        case '+' :{
            cout<<(a+b);
            break;
        }
        case '-' :{
            cout<<(a-b);
            break;
        }
        case '*' :{
            cout<<(a*b);
            break;
        }
        case '/' :{
            cout<<(a/b);
            break;
        }
        case '%' :{
            cout<<(a%b);
            break;
        }
    }

}