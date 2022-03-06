/*You are given two sorted array and you ahave to compute the union of the two array in the soted manner*/
#include<bits/stdc++.h>
using namespace std;

void Union(int arr1[] ,int arr2[] ,int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(i>0 && arr1[i-1]==arr1[i]){
            i++;
            continue;
        }
        if(j>0 && arr2[j-1] == arr2[j]){
            j++;
            continue;
        }

        if(arr1[i] < arr2[j]){
            cout << arr1[i] << " " ;
            i++;
        }
        else if(arr2[j] < arr1[i]){
            cout << arr2[j] << " " ;
            j++;
        }
        else{
            cout << arr1[i] << " " ;
            i++;
            j++;
        }
    }

    while(i<n1){
        if(i>0 && arr1[i] != arr1[i-1]){
            cout << arr1[i] << " " ;
            i++;
        }
    }
    while(j<n2){
        if(j>0 && arr2[j] != arr2[j-1]){
            cout << arr2[j] << " " ;
            j++;
        }
    }
}


int main(){
    int arr1[] = {1,2,3,3,3,4,5,6,7,8};
    int arr2[] = {0,4,5,6,6,7,8,9};
    Union(arr1,arr2,10,8);
}