//Insertion sort 
#include<bits/stdc++.h>
using namespace std ;


void InsertionSort(int arr[] ,int n){
    for(int i=0;i<n;i++){
        int key = arr[i] ;
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    cout << "The sorted array is : " ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    int arr[6] = {5,8,6,9,3,4};
    InsertionSort(arr,6);
}