/*===================Inserting in the doubly linked list===================*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int x){
        data = x;
        prev = next = NULL;
    }
};
// Insertion at the beginning of the doubly linked list.
void insert_begin(Node **head , int data){
    Node *newnode = new Node(data);
    newnode->next = *head;
    if((*head) != NULL){
        (*head)->prev = newnode;
    }
    *head = newnode;
}

// Insertion at the end of the doubly linked list.

void insert_at_end(Node **head , int data){
    Node *newnode = new Node(data);
    Node *temp = *head;
    if(*head == NULL){
        *head = newnode;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;

    }

}

// Insert at the given position
void insert_at_pos(Node **head , int data ,int pos){
    Node *curr = *head;
    Node *newnode = new Node(data);
    if(pos == 1){
        newnode->next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    }
    else{
        Node *fast = (*head)->next;
        for(int i=1;(i<=pos-2)&&(fast != NULL) ;i++){
            curr = curr->next;
            fast = fast->next;
        }
        newnode->next = fast;
        fast->prev = newnode;
        curr->next = newnode;
        newnode->prev = curr;

    }
}

//Display function
void display(Node *head){
    Node *temp = head;
    cout << "The elements of the linked list are : " << endl;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
}


int main(){
    Node *head = NULL;
    int choice = 1;
    while(choice){
        cout << "Enter the number to be inserted in the linked list " << endl;
        int x;
        cin >> x;
        insert_begin(&head ,x);
        cout << "Do You want to continue Y/N ? " << endl;
        cin >> choice;
    }
    display(head);
    cout << endl;

    int c = 1;
    while(c){
            cout << "Enter the number to be inserted at the end of the linked list" << endl;
            int y;
            cin >> y;
            insert_at_end(&head , y);
            cout << "Do You want to continue Y/N ?" << endl;
            cin >> c;
    }
    display(head);
    cout << endl;

    int c2 = 1;
    while(c2){
        cout << "Enter the number and the position which is to be inserted " << endl;
        int z , pos;
        cout << "Enter the number " << endl;
        cin >> z;
        cout << "Enter the position " << endl;
        cin >> pos ;
        insert_at_pos(&head , z ,pos);
        cout << "Do You want to continue Y/N ?" << endl;
        cin >> c2;
    }
    display(head);

}
