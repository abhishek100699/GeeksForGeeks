/*Given a Singly Linked List you have to reverse it recursively*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    // constructor
    Node(int x){
        data = x;
        next = NULL;
    }

};



Node *reverse_LL_Recursively(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *smallAns = reverse_LL_Recursively(head->next);
    Node *temp = smallAns;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallAns;

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
    cout << "The Reversed Linked List is : " << endl;
    //head = reverse_SLL(head);
    head = reverse_LL_Recursively(head) ;
    display(head);
}
