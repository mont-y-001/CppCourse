//function=> well defined task -> Re-usable/Refer ->vReadable
//int main is also a function of int return type that's why we give return 0 at the end of code.Return 0 basically tells us int main successfully executed.


//Pass By Value or Pass as copy  =>  if we call a functin then anothet function has copy it's changes doesn;t affect original one
//Return => return stop the exexution of particular function 



//###Add 2 no function

// #include<iostream>
// using namespace std;

// int getsum(int a,int b){    //parameter hai
//  return a+b;
// }
// int main(){
//     int a;
//     cout<<"enter the value of a: ";
//     cin>>a;
//     int b;
//     cout<<"enter the value of b: ";
//     cin>>b;
//   int sum =  getsum(a,b);       //arguement hai
//   cout<<"Addition result is:" <<sum;
//   return 0;
// }

// ###Find max of 3 number
#include<iostream>
using namespace std;
int findMax(int a,int b,int c){
    if(a>b && a>c){
    return a;
    }
    else if(b>c && b>a){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int maximumNumber = findMax(a,b,c);
    cout<<"Max value is: "<<maximumNumber<<endl;
}