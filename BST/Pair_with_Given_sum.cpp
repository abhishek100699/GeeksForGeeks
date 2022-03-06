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

// Using Inorder Traversal
void Inorder(Node *root , vector<int> &v){
    if(root==NULL) return ;
    Inorder(root->left,v);
    v.push_back(root->data);
    Inorder(root->right,v);
}

bool isPairPresent(vector<int> v, int sum){
    int l = 0;
    int h = v.size()-1;
    while(l<h){
        if(v[l]+v[h] == sum) return true;
        else if(v[l]+v[h] < sum){
            l++;
        }
        else{
            h--;
        }
    }
    return false;
}


// Using Hashing
bool IsPairPresentHashing(Node *root,int sum , unordered_set<int> &s){
    if(!root) return false;
    if(IsPairPresentHashing(root->left,sum,s)== true) return true;
    if(s.find(sum-root->data) != s.end()) return true;
    else{
        s.insert(root->data);
    }
    return IsPairPresentHashing(root->right,sum,s);

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
        
    int sum=49;
    vector<int> v;
    unordered_set<int> s;
    Inorder(root,v);
    cout << "Using Inorder Traversal" << endl;
    if(isPairPresent(v,sum)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    cout << "Using Hashing " << endl;
    if(IsPairPresentHashing(root,sum,s)){
        cout << "YES " << endl;
    }
    else{
        cout << "NO " << endl;
    }
    
          
    return 0;  
	
}