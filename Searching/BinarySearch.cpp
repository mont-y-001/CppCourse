#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;

    }
    return -1;

}

int main(){

    int even[6] = {3,6,12,47,51,64};
    int odd[5] = {2,4,6,8,10};

    cout<<"Index of given no. is: "<<BinarySearch(even, 6, 51);


}