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


Node *detect_remove_loop(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }
    if(slow != fast){
        return head;
    }
    slow = head;
    while(fast->next != slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    return head;
}
