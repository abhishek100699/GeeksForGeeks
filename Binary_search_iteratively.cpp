#include<bits/stdc++.h>
using namespace std;

int binary_search_iteratively(int *arr,int n,int k){
    int low = 0 ;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2 ;
        if(arr[mid] == k){
            return mid ;
        }
        else if(k<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}



int main(){
    int arr[100];
    int n;
    cout << "Enter the numbers to be inserted in the linked list " << endl;
    cin >> n;
    cout << "Enter the array elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter the element to be searched in the array " << endl;
    int k;
    cin >> k;
    int res = binary_search_iteratively(arr , n , k) ;
    cout << "The given element is present at the index : " << res << endl;

}
