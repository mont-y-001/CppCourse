#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* BuildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout<<"Enter data to inserting in left of "<<data<<endl;
    root->left = BuildTree(root->left);

    cout<<"Enter data to inserting in right of "<<data<<endl;
    root->right = BuildTree(root->right);

    return root;
}

void LevelOrderTraversal(Node* root){
   if(root == NULL){
       return;
   }

   queue<Node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
       Node* temp = q.front();
       q.pop();

       if(temp == NULL){
           cout << endl;
           if(!q.empty()){
               q.push(NULL);
           }
       }
       else{
           cout << temp->data << " ";
           if(temp->left){
               q.push(temp->left);
           }
           if(temp->right){
               q.push(temp->right);
           }
       }
   }
}

void Inorder(Node*root){
       if(root == NULL){
        return;
       }
       Inorder(root->left);
       cout<<root->data<<" ";
       Inorder(root->right);
}
void Preorder(Node*root){
       if(root == NULL){
        return;
       }
       cout<<root->data<<" ";
       Preorder(root->left);
       Preorder(root->right);
}
void Postorder(Node*root){
       if(root == NULL){
        return;
       }
       Postorder(root->left);
       Postorder(root->right);
       cout<<root->data<<" ";
}
  

int main(){
    Node* root = NULL;
    root = BuildTree(root);
    LevelOrderTraversal(root);
    cout<<"Inorder Tranversal "<<endl;
    Inorder(root);
    cout<<"Preorder Tranversal "<<endl;
    Preorder(root);
    cout<<"Postorder Tranversal "<<endl;
    Postorder(root);
}