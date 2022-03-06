/*You have been given an array you have to retunn the index of the second largest element in the array.
-> if all the elements are same then return -1 (Invalid index)
-> if the array have two or more occurence of the largest element the you don't have to assume the second occurence as largest.
*/

#include<bits/stdc++.h>
using namespace std;

//Naive approach.

int getlargest(int *arr,int n){
    int largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    return largest;
    
}


int secondLargest(int *arr, int n){
    int largerst = getlargest(arr,n);
    int res = -1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[largerst]){
            if(res == -1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    int n; 
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = secondLargest(arr,n);
    cout << "The Index of the second largest element is " << ans << endl;
}
