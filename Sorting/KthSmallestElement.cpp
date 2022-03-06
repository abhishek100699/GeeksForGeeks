#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=0;j<=h-1;j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}


int kthsmallestElement(int arr[] ,int n,int k){
    int l= 0 ;
    int h = n-1;
    while(l<=h){
        int p = partition(arr,l,h);;
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            h = p-1;
        }
        else{
            l = p+1;
        }
    }
    return -1;
}




int main(){
    int arr[] = {3,5,4,8,9,76,6};
     cout << kthsmallestElement(arr,7,4); 
}