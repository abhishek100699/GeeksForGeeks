#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left=right=NULL;
    }
};

bool Child_Sum_prop(Node *root){
    if(root==NULL) return true;
    if(root->left==NULL && root->right == NULL) return true;
    int sum=0;
    if(root->left != NULL){
        sum += root->left->data;
    }
    if(root->right !=NULL){
        sum += root->right->data;
    }
     return root->data == sum && Child_Sum_prop(root->left) && Child_Sum_prop(root->right) ;
}


int main(){
    Node *root = new Node(18);
    root->left = new Node(10);
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->left = new Node(3);
    root->right->right = new Node(5);
    root->left->left->left = new Node(4);

    if(Child_Sum_prop(root)){
        cout << "The Binary tree Follows Child Sum Property " << endl;
    }
    else{
        cout << "The Binary tree doesn't follow the child sum property " << endl;
    }
}
