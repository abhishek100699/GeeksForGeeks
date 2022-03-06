/*
Queue in stl supports the following functions
push(),pop(),front(),back(),empty(),size().

*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << "The elements of the queue are." << endl;
    while(q.size()>0){
	
        cout << q.front() << " " ;
        q.pop();
    }
    cout << "Execution Finished" << endl;
}
