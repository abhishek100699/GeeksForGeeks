/* A binary tree is called balenced binary tree if difference between left sun tree and right sub tree is not grater than 1*/


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


int isBalenced(Node *root){
    if(root==NULL) return 0;
    int lh = isBalenced(root->left);
    if(lh == -1) return -1;
    int rh = isBalenced(root->right);
    if(rh == -1) return -1;

    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(50);
    root->right->right = new Node(90);
   // root->left->left->left = new Node(20);
    //root->left->left->left->left = new Node(20);

    if(isBalenced(root)==-1){
        cout << "The Binary Tree is Not Balenced " << endl;
    }
    else{
        cout << "The Binary Tree is Balenced with the height as : " << isBalenced(root) << endl;
    }
}


/*
              10
         20         30
     40      50   50    90
  20
20      
*/