#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* insertintoBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d < root->data){  // Correction: Insert into left subtree for smaller values
        root->left = insertintoBST(root->left,d);
    }
    else{  // Insert into right subtree for greater values
        root->right = insertintoBST(root->right,d);
    }
    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertintoBST(root, data);
        cin >> data;
    }
}
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root->data == val){
        // 0 Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 Child
        if(root->left == NULL && root->right != NULL){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        if(root->left != NULL && root->right == NULL){
            Node*temp = root->left;
            delete root;
            return temp;
        }
        //2 Child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }

    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }

}

int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST (enter -1 to stop): "<<endl;
    takeinput(root);

    cout<<"Printing the BST Level Order Traversal:"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"min val in the tree: "<<minVal(root)->data <<endl;
    cout<<"max val in the tree: "<<maxVal(root)->data <<endl;
    
    cout<<"Printing the deletion BST level ordr Traversal"<<endl;
    root = deleteFromBST(root,30);
    levelOrderTraversal(root);
    
    return 0;
}
