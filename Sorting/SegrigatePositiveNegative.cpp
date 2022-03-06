#include<bits/stdc++.h>
using namespace std;

// using Lomuto Partition
/*
void PositiveNegative(int arr[],int n){
    int l = 0;
    int h = n-1;
    int i = l-1;
    int pivot = arr[h];
    for(int j = i;j<n;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1,arr[h]);
}
*/
// using hoares Partition.

void SortPositive(int arr[],int n){
    int i=-1,j=n;
    while(true)
    {
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j)return;
        swap(arr[i],arr[j]);
    }
}


int main(){
    int arr[4] = {12,-3,-4,5};
    SortPositive(arr,4);
    for(int x:arr){
        cout << x << " " ;
    }
}