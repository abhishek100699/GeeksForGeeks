/*============ Program to find the middle of the linked list =================*/
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
// Naive Solution
int find_middle(Node *head){
    Node *curr = head;
    int count = 0;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    if(head == NULL || head->next == NULL){
        return INT_MIN;
    }
    curr = head;
    for(int i=1;i<=count/2 ;i++){
        curr = curr->next;
    }
    return curr->data;

}

// effective solution
int find_middle_eff(Node *head){
    Node *slow = head;
    Node *fast = head;
    if(head == NULL){
        return INT_MIN;
    }


    while((fast != NULL) && (fast->next !=NULL)){
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
    }
    return slow->data;
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
        cout << "Enter the data to be inserted at the end of the linked list " << endl;
        int x;
        cin >> x;
        head = Insert_end(head ,x);
        cout << "Do You want to continue Y/N ? " << endl;
        cin >> c;
    }

    int ans = find_middle(head);
   // int ans = find_middle_eff(head);
    cout << "The middle element is " << ans << endl;

}
