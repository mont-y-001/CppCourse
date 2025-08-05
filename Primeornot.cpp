#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a no.";
cin>>n;
int i = 2;

if(n<=1){
    cout<<"The given no. is not a prime no."<<endl;

}
bool is_prime = true;
while(i<n){
    if(n%i==0){
        is_prime = false;
        break;
}
i = i+1;
}
if(is_prime){
    cout<<"The given no. is prime no.";
}
else{
    cout<<"The given no. is not  a prime no.";
}
}