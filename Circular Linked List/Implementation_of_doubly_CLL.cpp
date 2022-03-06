/*========================Doubly Circular Linked List ================================*/

#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *prev;
    Node *next;

    //Constructor
    Node(int x){
        data = x;
        prev = next = NULL;
    }
};
// Function to insert at the beginning of the doubly circular linked list.

Node *insert_beginning(Node *head , int data){
    Node *newnode = new Node(data);

    if(head == NULL){
        newnode->next = newnode;
        newnode->prev = newnode;
        return newnode;
    }

    newnode->prev = head->prev;
    newnode->next = head;
    head->prev->next = newnode;
    head->prev = newnode;

    return newnode;
}

// Insert at the end of the doubly circular linked list.
Node *Insert_at_end(Node *head , int data){
    Node *newnode = new Node(data);

    if(head == NULL){
        newnode->next = newnode;
        newnode->prev = newnode;
        return newnode;
    }

    newnode->prev = head->prev;
    newnode->next = head;
    head->prev->next = newnode;
    head->prev = newnode;

    return head;
}

// To print the doubly circular linked list.
void print_DCLL(Node *head){
    Node *curr = head;

    while(curr->next != head){
        cout << curr->data << " " ;
        curr = curr->next;
    }
    cout << curr->data;
}

int main(){
    Node *head = NULL;
    int c = 1;
    while(c){
        cout << "Enter the value to be inserted at the beginning of the liked list " << endl;
        int x;
        cin >> x;
        head = insert_beginning(head , x);
        cout << "Do You want to continue Y/N ? " << endl;
        cin >> c ;
    }

    cout << "The linked list is " <<  endl;
    print_DCLL(head);

    cout << endl;
    c = 1;
    while(c){
        cout << "Enter the data to be inserted at the end of the DCLL . " << endl;
        int y;
        cin >> y;
        head = Insert_at_end(head , y);
        cout << "Do You want to continue Y/N ?" << endl;
        cin >> c;
    }
    cout << ""
}

