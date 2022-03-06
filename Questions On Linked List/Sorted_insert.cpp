/*Insertion In the Linked List in the manner such that after insertion
the linked list remain sorted*/

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

Node *sorted_insert(Node *head , int data){
    Node *temp = head;
    Node *newnode = new Node(data);
    if(head == NULL){
        return newnode;
    }
    else if(data < head->data){
        newnode->next = head;
        return newnode;
    }

    while((temp->next->data < data) && (temp->next!= NULL)){
        temp = temp->next;
    }
    newnode->next = temp->next ;
    temp->next = newnode;
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

int main(){
    Node *head = NULL;
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    cout << "The original linked list is : " << " " ;
    display(head);
    cout << endl;
    cout << "Enter the data to be inserted in the linked list " << endl;
    int x;
    cin >> x;
    head = sorted_insert(head , x) ;
    cout << "Linked List after insertion " << endl;
    display(head);
}
