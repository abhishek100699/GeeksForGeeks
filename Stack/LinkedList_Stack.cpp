/*Linked List Implementation of the stack data structure.*/
#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Mystack{
    Node *head;
    int count;
    Mystack(){
        head = NULL;
        count = 0;
    }
    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        count++;
    }
    int pop(){
        if(head == NULL){
            return INT_MAX;
        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        count--;
        delete(temp);
        return ans;
    }
    int peek(){
        if(head == NULL){
            return INT_MIN;
        }
        return head->data;
    }
    int size(){
        if(head == NULL){
            return 0;
        }
        else{
            return count;
        }
    }
    bool isEmpty(){
        if(count==0){
            return 1;
        }
        return 0;
    }

};


int main(){

}