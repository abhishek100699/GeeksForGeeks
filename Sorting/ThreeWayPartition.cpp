/*Partition the array in such a way that all pivot element come together elements less than the pivot come in left of pivot 
and element grater than pivot come on the right side */

#include<bits/stdc++.h>
using namespace std;

void threeWayPartition(int arr[],int n,int pivot){
    int low = 0,mid = 0,high = n-1;
    while(mid <= high){
        if(arr[mid] < pivot){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == pivot){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main(){
    int arr[] = {2,1,2,20,10,20,1};
    int pivot = 2;
    threeWayPartition(arr,7,2);
    for(int i=0;i<7;i++){
        cout << arr[i] << " " ;
    }
}