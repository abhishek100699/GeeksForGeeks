#include<bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int data; 
  struct Node *left;
  struct Node *right; 
  Node(int k){
      data=k;
      left=right=NULL;
  }
};

void VerticalSum(Node *root,int hd,map<int,int> &m){
    if(root==NULL) return ;
    VerticalSum(root->left,hd-1,m);
    m[hd] += root->data;
    VerticalSum(root->right,hd+1,m);
}




int main() {
	
	Node *root = new Node(10);  
    root->left = new Node(8);  
    root->right = new Node(20);  
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);  
    root->right->right->left = new Node(25);
    map<int,int> m;
    VerticalSum(root,0,m);
    cout << "Vertical Sum : " ;
    for(auto x:m){
        cout << x.second << " " ;
    }
          
    return 0;  
	
}