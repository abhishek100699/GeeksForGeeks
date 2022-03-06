/*========================Deleting the kth Node of the Circular Linked List ===========================*/

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

// Deleting Kth node of the CLL .

Node *delete_kth_node(Node *head , int k){
    Node *curr = head;
    if(head == NULL){
        return NULL;
    }
    if(k==1){
        delete(head);
        return NULL;
    }
    for(int i=1;i<=k-2;i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = temp->next;
    delete(temp);
    return head;
}

//Insertion at the end of the CLL .

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

// Traversing and printing the circular linked list.
void print_circular_LL(Node *head){
    Node *temp = head;
    if(head == NULL){
        return;
    }

    cout << head->data << " " ;
    for(Node *p = head->next ; p!=head ; p = p->next){
        cout << p->data << " " ;
    }
}

int main(){
    Node *head = NULL;
    int c = 1;
    while(c){
        cout << "Enter the value to be inserted at the end of the CLL " <<  endl;
        int x;
        cin >> x;
        head = Insert_end_efficient(head , x);
        cout << "Do You want to continue Y/N ?" << endl;
        cin >> c;
    }

    cout << "The original linked list is : " ;
    print_circular_LL(head);

    cout << endl;

    cout << "Enter the node to be deleted " << endl;
    int k;
    cin >> k;
    head = delete_kth_node(head , k) ;
    cout << "Linked List After deleting kth Node : " ;
    print_circular_LL(head);
}
