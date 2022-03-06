/* == Detect loop in the linked list == */
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

// Time complexity o(n)

bool detect_Loop(Node *head){
    if(head == NULL){
        return false;
    }
    Node *curr = head;
    Node *temp = new Node;
    while(curr != NULL){
        if(curr->next == NULL){
            return false;
        }
        if(curr->next == temp){
            return true;
        }
        Node *curr_next = curr->next;
        curr->next = temp;
        curr = curr_next;
    }
    return false;
}



// Using Floyd Algorithm
bool deltect_loop(Nnode *head){
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
