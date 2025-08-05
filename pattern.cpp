#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter any no.: ";
  cin>>n;
  int i = 1;
  while(i<=n){
    int j=1;

    while(j<=n){
      cout<<j;     //n-j+1 for the reverse pattern
      j=j+1;
     
    }
    
    cout<<endl;
    i=i+1;
  }

}