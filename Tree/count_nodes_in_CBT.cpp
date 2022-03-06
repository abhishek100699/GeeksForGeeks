/*Given a complete binary tree you have to count the number of nodes in the cbt*/
/*
Time compexity of Naive method = O(n)
Time compexity of Eff method = O(logn*logn)

*/



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



// Naive Method
int countNode(Node *root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+countNode(root->left)+countNode(root->right);
    }
}

// efiicient soluton
int Num_Nodes(Node*root){
    if(root==NULL){
        return 0;
    }
    int lh = 0;
    Node *curr = root;
    while(curr){
        lh++;
        curr = curr->left;
    }
    curr = root;
    int rh = 0;
    while(curr){
        rh++;
        curr = curr->right;
    }
    if(lh==rh){
        return pow(2,lh)-1;
    }
    else{
        return 1+Num_Nodes(root->left)+Num_Nodes(root->right);
    }
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(2);

    cout << "Number of Node by Naive Approach " << countNode(root) << endl;
    cout << "Number of Node by Efficient Approach " << Num_Nodes(root) << endl;
}