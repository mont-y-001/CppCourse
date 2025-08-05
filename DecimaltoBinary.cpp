#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any decimal no.: ";
    cin>>n;
    int ans = 0;
    
   
    int place = 1;
    while(n != 0){
        int bit = n & 1;
            ans = place*bit + ans;
           n = n >> 1;
           place = place*10;

    }
        cout<<ans;
      
}
