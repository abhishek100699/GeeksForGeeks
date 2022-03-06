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

Node *insert_Node(Node*root,int x){
    if(root==NULL) return new Node(x);

    else if(root->data > x){
        root->left = insert_Node(root->left,x);
    }
    else{
        root->right = insert_Node(root->right,x);
    }
    return root;
}

void inorder(Node *root){
    if(root==NULL) return ;
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right) ;
}


int main(){
    Node *root = new Node(30);
    root->left = new Node(25);
    root->right = new Node(35);
    root->left->left = new Node(20);
    root->right->left = new Node(32);
    root->right->right = new Node(40);
    cout << "inorder Traversal of the tree before inserting the node  " ;
    inorder(root);
    cout << endl;
    cout << "Enter the value to be inserted " << endl;
    int x;
    cin >> x;
    root = insert_Node(root,x);
    cout << "Inorder traversal of the tree is  " ;
    inorder(root);
}