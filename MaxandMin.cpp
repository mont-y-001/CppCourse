#include<iostream>
#include<climits>
using namespace std;
    int getMAX(int arr[], int n){
        int maxi = INT_MIN;
        for(int i =0 ;i<n;i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
  
    int getMIN(int arr[], int n){
        int mini = INT_MAX;
        for(int i =1; i<=n;i++){
            mini = min(mini, arr[i]);

        }
        return mini;
    }
int main(){


    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    int arr[5] = {2,5,3,8,1};
    for(int i = 0; i<n;i++){
        cout<<arr[i];
    }

    cout<<"Max is: "<<getMAX(arr, n)<<endl;
    cout<<"Min is: "<<getMIN(arr, n);
    return 0;
}