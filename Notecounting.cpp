#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter amounttttt: ";
    cin>>amount;
    int note;
    int num = 1;    //important to initialize
    switch(num){  //num is used in switch not amount
        case 1:{
            note = amount/100;
            amount = amount-(100*note);
            cout<<"100 Note required :"<<note<<endl;

        }
        case 2:{
            note = amount/50;
            amount = amount-(50*note);
            cout<<"50 note required: "<<note<<endl;
        }
        case 3:{
            note = amount/20;
            amount = amount-(20*note);
            cout<<"20 note required: "<<note<<endl;
        }
        case 4:{
            note = amount/1;
            amount = amount-(1*note);
            cout<<"1 note required: "<<note<<endl;
        }
    }
}