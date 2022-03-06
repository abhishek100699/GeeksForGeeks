#include<bits/stdc++.h>
using namespace std;


void NBonacchi(int n,int m){
    int arr[m];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3;i<m;i++){
        arr[i] = arr[i-1] +arr[i-2] + arr[i-3] ;
    }
    for(int i= 0 ;i < m ; i++){
        cout << arr[i] << " " ;
    }
}

int main(){
    NBonacchi(3,8) ;
}