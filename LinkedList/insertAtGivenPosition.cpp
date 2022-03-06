#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next == NULL;
    }
};

Node* InsertAtGivenPos(Node *head,int pos,int x){
    Node *temp = new Node(x);
    if(pos == 1){
        return temp;
    }
    Node *curr = head;
    for(int i=1;i<=(pos-2) && curr!=NULL ;i++){
        curr = curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head = InsertAtGivenPos(head,4,30);
    cout << "The Linked list is " << endl;
    while(head!=NULL){
        cout << head->data << " " ;
        head = head->next;
    }
}