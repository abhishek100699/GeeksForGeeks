/*Given a array you have to print the pervious grater element for every element 
if there is no grater element is present then print -1*/
#include<bits/stdc++.h>
using namespace std;



void prevGraterElement(int *arr,int n){
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";

    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int pg = s.empty()?-1:s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}


int main(){
    int arr[] = {60,10,20,1,35,50};
    prevGraterElement(arr,6);
}