/*Givean an array and an index you have to insert an element at the gven index.*/

#include<bits/stdc++.h>
using namespace std;

int *insert_at_pos(int *arr,int num,int size,int pos){
    int cap = sizeof(arr) / sizeof(arr[0]) ;
    if(size == cap){
        cout << "The element can not be inserted into the array." << endl;
        return NULL;
    }
    else{
    int idx = pos-1;
    for(int i=idx;i>idx;i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = num;
    return arr;
    }
}


int main(){
    int size; 
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i] ;
    }
    int pos;
    cout << "Enter the index " << endl;
    cin >> pos;
    int num ;
    cout << "Enter the number to be inserted in the array." << endl;
    cin >> num;
    int *ans = insert_at_pos(arr,15,10,6);
    for(int i=0;i<10;i++){
        cout << ans[i] << " " ;
    }

}