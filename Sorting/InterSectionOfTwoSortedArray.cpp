/*You are given two sorted array you have to find the intersection of the two sorted array .*/
#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[],int arr2[] ,int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        while(i>0 && arr1[i-1] == arr1[i]){
            i++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            cout << arr1[i] << " " ;
            i++;
            j++;
        }
    }
    

}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {3,4,5,6,7,8};
    intersection(arr1,arr2,6,6);
}