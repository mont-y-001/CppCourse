#include<iostream>
using namespace std;
int main(){
    int far;
    cout<<"Enter farhenite temperature: ";
    cin>>far;

    int celsius = (far - 32)*5/9 ; // cel = kel-273.5
    cout<<celsius;


}