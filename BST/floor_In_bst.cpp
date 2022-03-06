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


Node *floor(Node* root,int x){
    Node *res = NULL;
    while(root!=NULL){
        if(root->data == x){
            return root;
        }
        else if(root->data > x){
            root = root->left;
        }
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
}


int main(){
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);
    root->right->left->left = new Node(55);
    root->right->left->right = new Node(55);

    Node *ans = floor(root,58);
    cout <<"Floor value of the 58 is : " << ans->data << endl;
    cout <<"Floor value of the 38 is : " << floor(root,38)->data << endl;
}