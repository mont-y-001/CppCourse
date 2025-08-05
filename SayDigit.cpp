#include<iostream>
using namespace std;

     void sayDigit(int n,string arr[]){

        //base case 
        if(n == 0){
              cout << arr[0] << " ";     //if we remove it,it doesn't print 1st place zero term
            return ;
        }
            
        //Processing    
        int output = n%10; 
        n = n/10;
       
       sayDigit(n, arr);
       cout<<arr[output] << " ";



     }
int main(){
    int n;
    cout<<"Enter no. Here: ";
    cin>>n;

    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"} ;

   sayDigit(n, arr);
    
    // cout<<endl;
    return 0;

  

}