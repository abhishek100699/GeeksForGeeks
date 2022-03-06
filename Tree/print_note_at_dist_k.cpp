/*Given the root of the binary tree you have to print the notes at the distance k form the root*/
#include<bits/stdc++.h>
using namespace std;



struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void print_at_dist_k(Node *root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout << root->data << " " ;
    }
    print_at_dist_k(root->left,k-1);
    print_at_dist_k(root->right,k-1);
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
    root->left->left->left = new Node(10);
    root->left->left->right = new Node(10);
    cout << "The Nodes at the dist k are : " ;
    print_at_dist_k(root,2);
}
