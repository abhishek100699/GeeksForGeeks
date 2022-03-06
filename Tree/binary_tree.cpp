#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// Implementation of preorder(root, left , right)
void preorder(Node *root){
    if(root!=NULL){
        cout << root->data << " " ;
        preorder(root->left);
        preorder(root->right);
    }
}

// Implementation of post order
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " " ;
    }
}

// Implementation of Inorder
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout << root->data << " " ;
        inorder(root->right);
    }
}


// Height of the binary tree
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right)) + 1;
    }
}

// Size of the binary tree
int getSize(Node *root){
    if(root==NULL) return 0;
    return 1+getSize(root->left)+getSize(root->right);
}

// Maximum element in the binary tree
int maximum(Node *root){
    if(root==NULL)return INT_MIN;
    return max(root->data,max(maximum(root->left), maximum(root->right)));
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);

    cout << "The Preorder Traveral Of the Tree is : " ;
    preorder(root);
    cout << endl;
    cout << "The Post order Traversal of the tree is : " ;
    postorder(root);
    cout << endl;
    cout << "The Inorder Traversal of the tree is : " ;
    inorder(root);
    cout << endl;
    cout << "Height Of the Binary Tree is : " ;
    cout << height(root) << endl;
    return 0;
}