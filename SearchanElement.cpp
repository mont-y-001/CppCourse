#include<iostream>
using namespace std;

    bool found(int Arr[],int N, int X){
        for(int i =0;i<N;i++){
          if(X==Arr[i]){
           return true;
          }
        }
            return false;
    
    }
int main(){
    int N;
    cout<<"Enter no. of elements you want: ";
    cin>>N;

    int Arr[10];
    for(int i = 0;i<N; i++){
        cout<<"Enter elements: ";
        cin>>Arr[i];
    }

    int X;
    cout<<"Enter element you want to search: ";
    cin>>X;

    
    if(found(Arr,N,X)){
        cout<<"Yes the given element founded: ";
    }
    else{
        cout<<"No, the given element is not in series";
    }
 

}