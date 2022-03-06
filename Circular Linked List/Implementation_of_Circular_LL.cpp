/*==============Circular Linked List Implementation ===================*/



#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *next;

    // Constructor
    Node(int x){
        data = x;
        next = NULL;
    }
};

// Insert at beginning of the CLL naive solution .

Node* Insert_at_beginning(Node *head , int data){
    Node *temp = new Node(data) ;
    if(head == NULL){
        temp->next = temp;
    }
    else{
        Node *curr;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

// Insert at the beginning of the linked list efficient solution.

 Node *Insert_beginning_efficiect(Node *head ,int data){
     Node *newnode = new Node(data);
     if(head == NULL){
            newnode->next = newnode;
            return newnode;
     }
     else{
         //insert the newnode next to the head.
         newnode->next = head->next;
         head->next = newnode;


         // Swap the values in head and head->next
         int t = head->data;
         head->data = newnode->data;
         newnode->data = t;
         return head;
     }
}


// Naive Solution to Insert at the end of the circular linked list.
Node *Insert_at_end(Node *head ,int data){

    Node *temp = head;
    Node *newnode = new Node(data) ;
    if(head == NULL){
        newnode->next = newnode;
        return newnode;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

// Efficient solution to Insert at the end of the circular linked list.
Node *Insert_end_efficient(Node *head , int data){
    Node *newnode =  new Node(data);
    Node *temp = head;
    if(head == NULL){
        newnode->next = newnode;
        return newnode;
    }

    newnode->next = head->next ;
    head->next = newnode;


    // Swapping the data.
    int t = head->data;
    head->data = newnode->data;
    newnode->data = t;
    head = newnode;
    return head;
}

// Naive solution to delete the head of the CLL .
Node *Delete_head(Node *head){
    Node *temp = head;
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete(head);
        return NULL;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    delete(head);
    return temp->next;
}

// Efficient solution to delete the head of the CLL .
Node *delete_head(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete(head);
        return NULL;
    }
    // Copy the data of head->next to the head and then delete the head->next.

    Node *temp = head->next;
    head->data = temp->data;



    head->next = temp->next;
    delete(temp);
    return head;
}




// Traversing and printing the circular linked list.
void print_circular_LL(Node *head){
    Node *temp = head;
    if(head == NULL){
        return;
    }

    cout << "The elements of the circular linked List are : " << endl;
    cout << head->data << " " ;
    for(Node *p = head->next ; p!=head ; p = p->next){
        cout << p->data << " " ;
    }
}


int main(){
    Node *head = NULL;
    int c = 1;
    while(c){
            cout << "Enter the value to be inserted at the beginning of the CLL " << endl;
            int x;
            cin >> x;
           // head = Insert_at_beginning(head , x);

            head = Insert_beginning_efficiect(head , x);
            cout << "Do You want to continue Y/N ? " << endl;
            cin >> c;
    }

    print_circular_LL(head);
    cout << endl;

    int c2 = 1;
    while(c2){
        cout << "Enter the value to be inserted at the end of the doubly CLL " << endl;
        int y ;
        cin >> y ;
       // head = Insert_at_end(head ,y);
       head = Insert_end_efficient(head ,y);
        cout << "Do You want to continue Y/N ? " << endl;
        cin >> c2;
    }

    print_circular_LL(head);

    cout << endl;
    cout << "After deleting the head of the CLL " << endl;
    //head = Delete_head(head);
    head = delete_head(head) ;
    print_circular_LL(head);
}
