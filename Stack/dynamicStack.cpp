#include<bits/stdc++.h>
using namespace std;

struct Mystack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        if(v.size()==0){
            return INT_MIN;
        }
        int ans = v.back();
        v.pop_back();
        return ans;
    }
    int peek(){
        if(v.size()==0){
            return INT_MIN;
        }
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }

};


int main(){
    Mystack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}