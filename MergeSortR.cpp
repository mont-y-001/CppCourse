#include<iostream>
using namespace std;

       void merge(int *arr,int s,int e){
        
        int mid = s + (e-s)/2;

        int len1 = mid + 1 -s;
        int len2 = e - mid;

        int *left = new int[len1];
        int *right = new int [len2];

        int mainArrayIndex = s;

        for(int i = 0;i<len1;i++){
            left[i] = arr[mainArrayIndex++];
        } 
        
        int mainArrayIndex = mid+1;
        for(int i = 0;i<len2;i++){
            right[i] = arr[mainArrayIndex++];
        } 
        

       }

       void MergeSort(int *arr,int s,int e){
        //base case
        if(s>=e){
            return ;
        }
        //process
        int mid = s+(e-s)/2;

        //Left part  
        MergeSort(arr,s,mid-1);

        //Right Part
        MergeSort(arr,mid+1,e);
        
        //merge sort parts
        merge(arr,s,e);

       }
int main(){
    int arr[8] = {68,2,13,15,0,32,19,79};
    int n = 8;
    MergeSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}