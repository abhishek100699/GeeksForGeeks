#include<bits/stdc++.h>
using namespace std;

Node *Insert_at_given_pos(Node *head , int pos ,int data){
    Node *curr = head;
    Node *newnode = new Node(data);
    if(pos == 0){
        newnode->next == head;
        return newnode;
    }
    for(int i=0;(i<=pos-2)&&(curr !=NULL) ;i++){
        curr = curr->next;
    }
    if(curr->NULL){
        return head;
    }
    newnode->next = curr->next;
    curr->next = newnode;
    return head;
}
