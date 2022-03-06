/*You are given an sorted linked list.You need to remove the duplicated from the linked list.*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    //Constructor
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *remove_duplicates(Node *head){
    Node *curr = head;
    if(curr == NULL){
        return NULL;
    }
    while(curr!= NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *temp = curr->next;
            curr->next = temp->next;
            delete(temp);
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}


void display(Node *head){
    if(head == NULL){
        return;
    }
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " " ;
        curr = curr->next;
    }

}


Node *Insert_end(Node *head ,int data){
    Node *curr = head;
    Node *newnode = new Node(data);
    if(head == NULL){
        return newnode;
    }
    if(head->next == NULL){
        head->next = newnode;
        return head;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = newnode;
    return head;
}


int main(){
    Node *head = NULL;
    int c = 1;
    while(c){
        cout << "Enter the value to be inserted at the end of the Linked List " << endl;
        int x;
        cin >> x;
        head = Insert_end(head , x);
        cout << "Do You want to continue Y/N ?" << endl;
        cin >> c;
    }
    cout << "The original linked list is : " << endl;
    display(head);
    head = remove_duplicates(head);
    cout << endl;
    cout << "The linked list after removing duplicates." << endl;
    display(head);
}
