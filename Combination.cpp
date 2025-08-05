#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;;
    for(int i = 1; i<=n; i++){
        fact = fact*i;

    }
    return fact;
}
 
 
   int combination(int n, int r){
    int num =factorial(n);
    int den = factorial(r) * factorial(n-r);
    return num/den;

    }


int main(){

    int n, r;
    cout<<"Enter two no which you want to perform combination: ";
    cin>>n>>r;
    cout<<combination(n,r);

    int a, b;
    cout<<"Enter two no which you want to perform combination: ";
    cin>>a>>b;
    cout<<combination(a,b);

    int c, d;
    cout<<"Enter two no which you want to perform combination: ";
    cin>>c>>d;
    cout<<combination(c,d);

    int x, y;
    cout<<"Enter two no which you want to perform combination: ";
    cin>>x>>y;
    cout<<combination(x,y);


}