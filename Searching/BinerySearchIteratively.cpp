// Code for Binary search iteratively
#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid = low + (high-low)/2 ;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int main(){
    cout << "Enter the value of n" << endl;
    int n;
    cin >> n;
    cout << "Enter the array elements " << endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << endl;
    int x;
    cout << "Enter the value to be searched " << endl;
    cin >> x;
    int ans = binarySearch(arr,n,x);
    cout << "The index at witch the given value is present is " << ans << endl;
}