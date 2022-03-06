#include<bits/stdc++.h>
using namespace std;
/*
    bool isPresent(int arr[],int n,int sum){
        int low = 0;
        int high = n-1;
        while(low<high){
            if(arr[low]+arr[high] >=sum){
                return true;
            }
            else{
                low++;
            }
        }
        return false;
    }
    */
    
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int low = 0;
        int high = n-1;
        int count = 0;
        for(int i=0;i<n;i++){
        while(low<high){
            if(arr[low]+arr[high] >= arr[i]){
                count++;
            }
            else if(arr[low] + arr[high] < arr[i]){
                low++;
            }
        }
        }
        return count ;
    }




int main(){
    int arr[] = {3,4,5};
    cout << findNumberOfTriangles(arr,3) << endl;
}