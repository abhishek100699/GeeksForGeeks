// Given ans array of unsorted non negative elements fid if any sub array exist with the given sum value.
//Sliding Window Approach.
#include<bits/stdc++.h>
using namespace std;


void SubArray(int arr[] , int k,int n){
    int s = 0 ;
    int e = 0;
    int StartIndx,endIndex;
    int curr_sum = arr[0];
    int ans = 0;
    int min_Indx = INT_MAX;
    int MinD = 0;
    for(int e = 1;e<n;e++){
        while(curr_sum>k && s<e-1){
            curr_sum = curr_sum-arr[s];
            s++;
        }
        if(curr_sum == k){
           // return true;
           StartIndx = s;
           endIndex = e;
           break;
        }
        if(e<n){
            curr_sum = curr_sum+arr[e];
        }
    }
    //return curr_sum==k ;
    if(curr_sum == k){
        for(int i=StartIndx;i<endIndex;i++){
        cout << arr[i] << " " ;
        }
        cout << endl;
        cout << "Start Index : " << StartIndx << " End Idx : " << endIndex ;
        
    }

}


int main(){
    int arr[6] = {2,3,1,2,4,3} ;
    /*
    if(SubArray(arr,33,6)){
        cout << "Yes " << endl;
    }
    else{
        cout << "No" << endl;
    }
    */
    SubArray(arr,7,6);
}