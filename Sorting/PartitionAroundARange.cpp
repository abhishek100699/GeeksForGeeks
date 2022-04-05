/*Given an array Partition the array in the given range (values which are less then the range should come before the range
then range value  after that grater values)*/

#include<bits/stdc++.h>
using namespace std;


void partitionInRange(int arr[],int n,int lr,int rr){
    int low = 0,mid = 0,high = n-1;
    while(mid <= high){
        if(arr[mid] < lr){
            swap(arr[low],arr[mid]);
            low++;
        }
        else if(arr[mid] >= lr && arr[mid] <= rr){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main(){
    int arr[] = {10,5,6,3,20,9,40};
    int lr = 5, rr = 10;
    partitionInRange(arr,7,lr,rr);
    for(auto x: arr){
        cout << x << " " ;
    }
}