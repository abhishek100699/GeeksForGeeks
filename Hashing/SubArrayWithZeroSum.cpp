#include<bits/stdc++.h>
using namespace std;

//Naive Approach

bool subArrayWithZeroSum(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr_sum = 0;
        for(int j=i;j<n;j++){
            curr_sum += arr[j];
            if(curr_sum == 0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {4,-3,2,1};
    if(subArrayWithZeroSum(arr,4)){
        cout << "Yes : " << endl;
    }
    else{
        cout << "No " << endl;
    }
}