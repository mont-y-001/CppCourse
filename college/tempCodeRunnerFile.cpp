#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
    arr = new int[size];
    this->size = size;
    top = -1;
    }
    void push(int data){
        if(size-top>1){
            top++;
            arr[top] = data;
        }else{
            cout<<"Stack is Overflow";
        }
    }
    void Pop(){
        if(top == -1){
            cout<<"Stack is Underflow";
        }else{
            top--;
        }
    }
    int getTop(){
        if(top==-1){
            cout<<"Their is no element in stack";
        }else{
            return arr[top];
        }
    }
    int getSize(){
        return top+1;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
   Stack st(5);
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);

   while(!st.isEmpty()){
      cout<<st.getTop()<<" ";
      st.Pop();
   }
}