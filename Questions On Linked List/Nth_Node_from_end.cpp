
/*Given a linked list find the find nth node from the end of the linked list*/

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
// Experienced Solution.
int nth_Node_from_end(Node *head, int n){
    Node *first = head;
    Node *second = head;
    int i = 1;
    if(head == NULL){
        return INT_MIN;
    }
    while(i <= n){
        if(first->next == NULL){
            return INT_MIN;
        }
        first = first->next;
        i++;
    }
    while(first != NULL){
        second = second->next;
        first = first->next;
    }
    return second->data;

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
    display(head);
    cout << endl;
    cout << "Enter the Node position from the end of the linked list : " << endl;
    int n;
    cin >> n;
    cout << "The nth Node from the end of the linked list is : " << nth_Node_from_end(head,n) << endl;
}

