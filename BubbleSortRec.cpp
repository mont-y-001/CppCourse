#include<iostream>
using namespace std;

        void bubbleSort(int *arr,int n){
            //base case
            if(n == 0 || n==1){
                return ;
            }
            //processs
            for(int i = 0;i<n-1;i++){
                if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
            }

            //Rc
            bubbleSort(arr,n-1);

        }
int main(){
    int arr[6] = {9,23,5,12,6,0};
    int n = 6;
    bubbleSort(arr, 6);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}