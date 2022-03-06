#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}


void quickSort(int arr[],int l,int h){
    if(l<h){
        int p = partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

int main(){
    int arr[9] = {2,1,4,5,3,9,6,7,8};
    quickSort(arr,0,8);
    for(int x:arr){
        cout << x << " " ;
    }
}