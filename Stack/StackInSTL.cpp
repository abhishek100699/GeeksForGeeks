/*STL Implementation of stack*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << "The Size of the stack is :" << s.size() << endl;
    while(s.empty() == false){
        cout << s.top() << endl;
        s.pop();
    }
}