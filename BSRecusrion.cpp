#include<iostream>
using namespace std;

        int bs_recursion(int arr[],int s,int e,int key){
            //base case
            if(s>e){
                return -1;
            }
            int mid = s +(e-s)/2; 
            if(arr[mid] == key){
                return mid;
              

            }
            if(arr[mid]>key){
               return bs_recursion(arr,0,mid-1,key);
               
            }
            else{
                return bs_recursion(arr,mid+1,e,key);
               
            }

           
         }
int main(){
    int arr[5] = {9,15,19,21,26};
    int size = 5;
    int key = 16;

    int ans = bs_recursion(arr,0,size-1,key);
   

     if(ans != -1){
         cout<<"Element is found:"<<ans; 
     }
     else{
         cout<<"Element is not existed";
     }

     return 0;
    

}