/*You have been given an array and you have to count the frequencies of the elements in the array*/
#include<bits/stdc++.h>
using namespace std;


void countOccurences(int arr[],int n){
    unordered_map<int,int> h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto x:h){
        cout << x.first << " " << x.second << endl;
    }
}


int main(){
    int arr[] = {1,2,2,2,3,4,4,4,4,3,3,5,5,5,8};
    countOccurences(arr,15);
}