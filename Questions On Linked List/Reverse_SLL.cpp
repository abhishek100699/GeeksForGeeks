/*Program to reverse a singly linked list*/

#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;

    //constructor
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Naive Solution
Node *reverse_SLL(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    vector<int> arr;
    for(Node *curr = head;curr != NULL ; curr = curr->next){
        arr.push_back(curr->data);
    }

    for(Node *curr = head ; curr!=NULL;curr = curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}


// Efficient Solution
Node *reverse_eff(Node *head){
    Node *prev = NULL;
    Node *curr = head;
    while(curr != NULL){
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
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
    head = reverse_eff(head);
    display(head);
}

