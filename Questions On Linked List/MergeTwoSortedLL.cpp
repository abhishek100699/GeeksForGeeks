/*you have been given two sorted linked list you have to merge them without using extra space.*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *mergeTwoSortedLL(Node *a,Node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node *head = NULL;
    Node *tail = NULL;
    if(a->data < b->data){
        head = a;
        tail = a;
        a = a->next;
    }
    else{
        head = b;
        tail = b;
        b = b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data<=b->data){
            tail->next = a;
            tail = a;
            a = a->next;
        }else{
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a==NULL){
        tail->next = b;
    }else{
        tail->next = a;
    }
    return head;
}

void display(Node *head){
    Node *curr = head;
    cout << "The linked list is : " << endl;
    while(curr!=NULL){
        cout << curr->data << " " ;
        curr = curr->next;
    }
}


int main(){
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(4);
   // head1->next->next->next = new Node(40);
    Node *head2 = new Node(1);
    head2->next = new Node(3);
    head2->next->next = new Node(4);
   // head2->next->next->next = new Node(18);
   // head2->next->next->next->next = new Node(35);
    cout << "The first linked list : " << endl;
    display(head1);
    cout << endl;
    cout << "The second linked list : " << endl;
    display(head2);
    cout << endl;
    display(mergeTwoSortedLL(head1,head2));
}