/*===================Program to reverse the doubly linked list =======================*/



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

//Display function
void display(Node *head){
    Node *temp = head;
    cout << "The elements of the linked list are : " << endl;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
}



// Reverse the doubly linked list.
Node* Reverse_DLL(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *temp = NULL;
    Node *curr = head;

    while(curr != NULL){
        // To swap
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // to Traverse the doubly linked list.
        curr = curr->prev;
    }
    return temp->prev;

}


int main(){
    Node *head = NULL;
    int c = 1;
    while(c){
        cout << "Enter the value to be inserted in the doubly linked list : " << endl;
        int x;
        cin >> x;
        insert_at_end(&head , x);
        cout << "Do You want to continue Y/N ? " << endl;
        cin >> c;
    }
    cout << endl;
    display(head);
    cout << endl;

    // Reversing the linked list.
    head = Reverse_DLL(head);

    cout << "The Reversed Linked List is : " ;
    display(head);

}
