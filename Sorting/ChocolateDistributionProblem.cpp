/*You have been given an array of packets of chocolate you hae to distribute it among th m childrens such that diffence 
between the maximum and minimum chocolate a child get is minimum.*/
#include<bits/stdc++.h>
using namespace std;

int mindiff(int arr[],int n,int m){
    if(m>n){
        return -1;
    }
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    int i;
    for(i=0;(i+m-1)<n;i++){
        res = min(res,arr[i+m-1]-arr[i]);
    }
    return res;

}

int main(){
    int arr[7] = {7,22,21,4,9,12,23};
    cout << "Min difference : " << mindiff(arr,7,3);
}