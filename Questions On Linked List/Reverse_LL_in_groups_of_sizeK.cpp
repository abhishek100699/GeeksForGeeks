/*======================================================================
Given this linked list: 1 -> 2 -> 3 -> 4 -> 5

For k = 2, you should return: 2 -> 1 -> 4 -> 3 -> 5

For k = 3, you should return: 3 -> 2 -> 1 -> 5 -> 4
=========================================================================*/

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


Node *k_reverse(Node *head ,int k){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = NULL;
    Node *temp = NULL;
    Node *curr = head;
    int i=0;
    while(i<k && curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        i++;
    }
    if(temp != NULL){
        Node *smallAns = k_reverse(temp ,k);
        head->next = smallAns;
    }
    return prev; //this is the head of the linked list.
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
    cout << "Enter the value of the k : " << endl;
    int k;
    cin >> k;
    cout << "The Reversed Linked List in the group of size k is : " << endl;
    //head = reverse_SLL(head);
    head = k_reverse(head, k) ;
    display(head);
}

