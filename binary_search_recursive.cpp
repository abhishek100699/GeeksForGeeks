#include<bits/stdc++.h>
using namespace std;


int binary_search_recursive(int *arr , int n, int k){
    int low = 0;
    int high = n-1;

    //base case.
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2 ;

    if(arr[mid] == k){
        return k;
    }
    else if(k<arr[mid]){
        return binary_search_recursive(arr , n , )
    }


}
