// Implementation of the bubble sort Algorithm
#include<bits/stdc++.h>
using namespace std;

int * BubbleSort(int *arr , int n){
    bool swapped;
    for(int i=0;i<n-1;i++){
        swapped  = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    return arr;
}


int main(){
    int arr[10] = {4,5,2,3,6,0,1,9,8,7};
    int *ans = BubbleSort(arr,10);
    cout << "The Swapped array is " << endl;
    for(int i=0;i<10;i++){
        cout << ans[i] << " " ;
    }

}