#include<iostream>
using namespace std;

void reverse(string &ch,int i, int j){
    //base case
    if(i>j){
        return ;
    }
    swap(ch[i],ch[j]);
    i++;
    j--;

    //recursion call
    reverse(ch,i,j);

}
int main(){
    string ch = "abcd1";
    reverse(ch, 0, ch.length()-1);
    cout<<ch<<endl;

    return 0;

}