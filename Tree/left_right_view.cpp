/*Given  a binary tree print left and right view of the binary tree*/
#include<bits/stdc++.h>
using namespace std;

vector<int> ans;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// Right view of the tree
void print_right_view(Node *root,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
        cout << root->data << " ";
    }
    print_right_view(root->right,level+1);
    print_right_view(root->left,level+1);
    
}


// Left view of the binary tree
void print_left_view(Node *root,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
        cout << root->data << " ";
    }
    print_left_view(root->left,level+1);
    print_left_view(root->right,level+1);
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->left->left->left = new Node(20);
    cout << "The right view of the tree is : " ;
    print_right_view(root,0);
    ans.clear();
    cout << endl;
    cout << "The left view of the tree is : " ;
    print_left_view(root,0);

}