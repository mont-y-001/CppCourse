#include<iostream>
#include<vector>
using namespace std;

//index no. nikalna aur sikhenge

bool searcharray(const vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int cols = matrix[0].size();
int s = 0;
int e = row*cols-1;
int mid = s + (e-s)/2;


while(s<=e){
    int element = matrix[mid/cols][mid%cols];
    if(element == target){
        return true;
    }
    else if(element > target){
        e = mid-1;

    }
    else{
        s = mid+1;
    }
    mid = s+(e-s)/2;
}
return 0;
}

int main(){
    int row, cols, target;
    cout<<"Enter no. of row and col here: ";
    cin>>row>>cols;
   vector<vector<int>> matrix(row, vector<int>(cols));
   cout<<"Enter size of matrix: ";
   for(int i = 0;i<row;i++){
    for(int j = 0;j<cols;j++){
    cin>>matrix[i][j];
   }
   }

   cout<<"Enter the target: ";
   cin>>target;

   bool result = searcharray(matrix,target);
   if(result){
    cout<<"Element found in the matrix: ";
   }
   else{
    cout<<"Element is not found: ";
   }
   return 0;

}