/*  Given a binary
 array sort it in order of n
*/
#include<bits/stdc++.h>
using namespace std;

void sortBinaryArray(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{i++;} while(arr[i]==0);
        do{j--;} while(arr[j] == 1);
        if(i>j) return ;
        swap(arr[i],arr[j]);
    }
}


int main(){
    int arr[] = {0,1,1,1,0,0,1};
    sortBinaryArray(arr,7);
    for(auto x:arr){
        cout << x << " " ;
    }
}