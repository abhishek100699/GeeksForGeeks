#include<bits/stdc++.h>
using namespace std;

// Naive Solution
int maxProfit(int arr[],int start,int end){
    if(end<=start){
        return 0;
    }
    int profit = 0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(arr[j]>arr[i]){
                int curr_profit = (arr[j]-arr[i]) + maxProfit(arr,start,i-1) + maxProfit(arr,j+1,end);
                profit = max(curr_profit,profit);
            }
        }
    }
    return profit;
}

// Efficient Solution
int maxProfit(int arr[],int n){
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit += arr[i]-arr[i-1];
        }
    }
    return profit;
}

int main(){
    int arr[] = {1,5,3,8,12};
    int n = 5;
    int ans = maxProfit(arr,0,n-1);
    cout << "Max Profit is : " << ans << endl;
    cout << "Max Profit Efficient is : " << maxProfit(arr,5);
}
