/*You are given an array ans index of an pivot element you have to Partition this array about the pivot element such that the 
smaller elements than the pivot element are on the left of the pivot and and grater are on the other side */

#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int l, int h, int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
        if(arr[i]<=arr[p] && i != p)
            {
                temp[index]=arr[i];index++;
            }
    temp[index++] = arr[p];
    int res = index-1;
    for(int i=l;i<=h;i++)
        if(arr[i]>arr[p])
            {
                temp[index]=arr[i];index++;
            }
    for(int i=l;i<=h;i++)
        arr[i]=temp[i-l];

    return res;    
}

/*
Mera code

int partition(int arr[], int low,int high,int n,int p){
    int pivot = arr[p];
    swap(arr[p] ,arr[high]);
    int temp[high-low+1];
    int tidx = 0;
    for(int i=low;i<=high;i++){
        if(arr[i]<pivot){
            temp[tidx] = arr[i];
            tidx++;
        }
    }
    int ans = low+tidx ;
    for(int i=low ;i<high;i++){
        if(arr[i]>pivot){
            temp[tidx] = arr[i];
            tidx++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i-low];
    }
    return ans;
}

*/


int main(){
    int arr[] = {5,13,8,9,12,4,11};
    cout << partition(arr,0,6,2);
}



