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
// Serialization
const int EMPTY  = -1;
void serialize(Node *root, vector<int> &arr){
    if(root==NULL){
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);

}

// Deserialization
int index = 0;
Node *deserialization(vector<int> &arr){
    if(index = arr.size()){
        return NULL;
    }
    int val = arr[index];
    index++;
    if(val==EMPTY) return NULL;
    Node *root = new Node(val);
    root->left = deserialization(arr);
    root->right = deserialization(arr);
    return root;
}


int main(){
    vector<int> arr;
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    serialize(root, arr);
}