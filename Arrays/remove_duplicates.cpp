/*
Given an array remove the duplicate elements form the array
*/

#include<bits/stdc++.h>
using namespace std;

int  Remove_Duplicates(int arr[], int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}



int main(){
    int arr[] = {1,2,2,3,4,4,4,5};
    cout << "Array before removing the duplictes :" << endl;
    for(auto x:arr){
        cout << x << " " ;
    }
    cout << endl;
    int ans = Remove_Duplicates(arr, 8);
    cout << "Size of the array after removing the duplicates from it " << ans <<  endl;
    for(auto x:arr){
        cout << x << " " ;
    }
}