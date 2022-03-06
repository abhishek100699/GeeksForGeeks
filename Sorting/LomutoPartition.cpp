

#include<bits/stdc++.h>
using namespace std;

void LomutoPartition(int arr[],int low,int high,int p){
    // We assume Pivot element as high always.
    swap(arr[p] , arr[high]);
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1] , arr[high]);
    return i+1;
}



int main(){
    int arr[] = {5,13,8,0,12,4,11};
    cout << "Partition Index : " << LomutoPartition(arr,0,6,1);
}