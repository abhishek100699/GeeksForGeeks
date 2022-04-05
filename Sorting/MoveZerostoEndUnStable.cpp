/*Given an array of integers move all the zeros to the end of the aarray*/

#include<bits/stdc++.h>
using namespace std;

void moveZerosToEndUnStable(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{i++;} while(arr[i]!=0);
        do{j--;} while(arr[j]==0);
        if(i>j) return ;
        swap(arr[i],arr[j]);
    }
}



int main(){
    int arr[] = {3,0,2,0,1,0,0};
    moveZerosToEndUnStable(arr,7);
    for(auto x: arr){
        cout << x << " " ;
    }
}