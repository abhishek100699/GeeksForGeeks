/*===================Program to delete the head / tail of the DLL ======================*/



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
// Insert Function

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

//Delete head of the DLL
void Delete_head_of_DLL(Node **head){
    Node *temp = *head;
    if(*head == NULL){
        *head = NULL;
    }
    else if((*head)->next == NULL){
        *head == NULL ;
        delete(temp);
    }
    else{
        (*head) = (*head)->next ;
        (*head)->prev == NULL;
        delete(temp);
    }

}


// Delete tail of the DLL
Node * delete_tail_of_dll(Node *head){
    Node *temp = head ;
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        delete(temp);
        return NULL;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL ;
    delete(temp);
    return head;
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

    // After deleting the head of the doubly linked list

    Delete_head_of_DLL(&head);

    cout << "Linked List after deleting the head is : " << endl ;
    display(head);
    cout << endl;

    // After deleting the tail of the DLL
    head = delete_tail_of_dll(head);
    cout << "Linked List After deleting the tail of the linked list is : " << endl;
    display(head);
    cout << endl;

}
