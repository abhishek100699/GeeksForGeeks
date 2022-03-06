#include<bits/stdc++.h>
using namespace std;


struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        if(top == cap-1){
            cout << "Stack is full" << endl;
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        if(top==-1){
            return INT_MIN;
        }
        return arr[top--];
    }
    int peek(){
        if(top==-1){
            return INT_MIN;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};



int main(){
    MyStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.isEmpty() << endl; 

}