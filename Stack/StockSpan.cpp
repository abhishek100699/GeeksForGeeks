/*Stock span problem*/

#include<bits/stdc++.h>
using namespace std;


void StockSpan(int *arr,int n){
    stack<int> s;
    s.push(0);
    cout << "1 " ;
// here we are storing the index of closest grater value in the left and the closest of the closest value index on the left side.
    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()] <= arr[i]){
            s.pop();
        }
        int span = i-s.top();
        cout << span << " " ;
        s.push(i);
    }
}


int main(){
    int arr[] = {60,10,20,15,35,50};
    StockSpan(arr,6);
}