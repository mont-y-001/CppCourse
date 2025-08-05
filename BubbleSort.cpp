#include<iostream>
using namespace std;

         void BubbleSort(int arr[],int n){
            for(int i = 1;i<n;i++){
                for(int j = 0;j<n-i;j++){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }
            }

         }
int main(){
    int arr[6] = {9,3,13,1,4,0};
    int n = 6;
    BubbleSort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
    



}