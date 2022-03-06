/*Smallest element which is grater of equal to the element on the left side*/

#include<bits/stdc++.h>
using namespace std;


// Naive Solution
void printCeilingNaive(int arr[],int n){
    cout << -1 << " " ;
    
    for(int i=1;i<n;i++){
        int diff = INT_MAX;
        for(int j=0;j<i;j++){
            if(arr[j]>=arr[i]){
                diff = min(diff,arr[j]-arr[i] );
            }
        }
        if(diff==INT_MAX){
            cout << -1 << " " ;
        }
        else{
            cout << diff + arr[i] << " " ;
        }
    }
}


// Efficient solution
void printCeiling(int arr[] ,int n){

    set<int> s;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        if(s.lower_bound(arr[i])!=s.end()){
            cout << *(s.lower_bound(arr[i])) << " ";
        }
        else{
            cout << -1 << " " ;
        }
        s.insert(arr[i]);
    }
}



int main(){
    int arr[]={2,8,30,15,25,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "By Efficient method " ;
    printCeiling(arr,n);
    cout << endl;
    cout << "Naive Method " << endl;
    printCeilingNaive(arr,n);

}