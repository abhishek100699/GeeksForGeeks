/*
Given an array Arramge it such that all zeros are at the end of the array
and the relatve position of the rest of the elements is fixed.
*/

#include<bits/stdc++.h>
using namespace std;

void MoveZerosToEnd(int arr[], int n){
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[res]);
            
            res++;
        }
    }
    cout << "The Array After Moveing Zeros to End is " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}



int main(){
    int arr[] = {1,0,0,2,0,0,3,4,5};
    
    cout << "Modified Array is " << endl;
    MoveZerosToEnd(arr, 9);
}