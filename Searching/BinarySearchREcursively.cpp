#include<bits/stdc++.h>
using namespace std;
int binarySearchRecursively(int arr[] ,int low,int high,int x){
    int mid = low + (high-low)/2 ;
    if(low>high){
        return -1;
    }
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] < x){
        return binarySearchRecursively(arr,mid+1,high,x);
    }
    else{
        return binarySearchRecursively(arr,low,mid-1,x);
    }

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
    int ans = binarySearchRecursively(arr,0,n,x);
    cout << "The index at witch the given value is present is " << ans << endl;
}