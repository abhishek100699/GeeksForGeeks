// Sort Even odd .

#include<bits/stdc++.h>
using namespace std;


void sortEvenOdd(int arr[],int n){
    int l=0;
    int h=n-1;
    int i = l-1;
    int j = n;
    while(true){
        do{
            i++;
        }
        while(arr[i]%2!=0);
        do{
            j--;
        }while(arr[j]%2==0);
        if(i>=j){
            return;
        }
        swap(arr[i],arr[j]);
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    sortEvenOdd(arr,9);
    for(int x:arr){
        cout << x << " " ;
    }
}