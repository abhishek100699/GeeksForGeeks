// Programme to perform the different operation in the singly linked list.
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


void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }

}

void insert_from_begin(Node **head , int x){
    Node* newnode = new Node(x);
    newnode->next = (*head);
    (*head) = newnode;
}

void insert_at_last(Node **head ,int x){
    Node *temp = (*head);
    Node *newnode = new Node(x);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void delete_from_begning(Node **head){
    Node *temp = (*head);
    (*head) = (*head)->next;
    delete(temp);
}

void delete_from_end(Node **head){
    // first perform deallocation of memeory.

    if(*head == NULL){
        head = NULL;
    }
    if((*head)->next == NULL){
        delete (*head);
        head = NULL;
    }
    Node *temp = (*head);
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
}

Node* insert_at_given_pos(Node *head , int pos, int x){
    Node *temp = head;
    Node *temp1 = head;
    int count = 0;
    while(temp1->next != NULL){
        count++;
        temp1 = temp1->next;
    }
    if(pos<=count+1){
    Node *newnode = new Node(x);
    int i=1;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode->next;
    return head;
    }
}


// Search the given element and return its position
int Search(Node *head ,int x){
    Node *curr = head;
    int pos=1;
    while(curr!= NULL){
    if(curr->data == x){
        return pos;
    }
    else{
        pos++;
        curr = curr->next;
    }
    }
    return -1;
}

int main(){
    Node *head = NULL;
    insert_from_begin(&head , 10);
    /*
    int c = 1;
    while(c){
        cout << "Enter the data to be inserted at the begning of the linked list :" << endl;
        int x;
        cin >> x;
        insert_from_begin(&head , x);
        cout << "Do you want to continue ? 1/0" << endl;
        cin >> c;
    }
    cout << endl;
    cout << "The linked list is "<< endl;
    */
    int c2 = 1;
    while(c2){
        cout << "Enter the data to be inserted at the last of the linked list " << endl;
        int x;
        cin >> x;
        insert_at_last(&head , x);
        cout << "Do you want to continue 1/0 ?" << endl;
        cin >> c2;
    }

    cout << endl;
    cout << "The linked list is " << endl;
    display(head);
    /*
    cout << endl;
    cout << "After deleting from the end " << endl;
    delete_from_end(&head);
    display(head) ;
    */

    head = insert_at_given_pos(head , 3 , 25);
    cout << endl;
    cout << "After inserting at the the given position. " << endl;
    display(head);
    cout << endl;
    /*
    cout << "Enter the data to be searched " << endl;
    int x;
    cin >> x;
    cout << "The given data is present at the pos " << Search(head , x) << endl;
     /*/
}



