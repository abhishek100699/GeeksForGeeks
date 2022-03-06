// Given an array of intergers you have to id the majority element in the array.
// Majority element is the element which appears more than n/2 times where n is the size of the array.

#include<bits/stdc++.h>
using namespace std;


int findMajority(vector<int> arr){
    int n = arr.size();
    int count = 1;
    int res = 0;
    // to find the eligible candidate.
    for(int i=1;i<n;i++){
        if(arr[i] == arr[res]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0 ){
            res = i;
            count = 1;
        }
    }

// to check if there is no majority
    count = 0;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }
    }
    if(count <= n/2){
        res = -1 ;
    }
    return res;
}



int main(){
    vector<int> arr = {8,8,6,6,6,4};
    cout << findMajority(arr);
}