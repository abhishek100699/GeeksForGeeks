#include<bits/stdc++.h>
using namespace std;

int maxGuestMeeting(int arr[],int dept[],int n){
    sort(arr,arr+n);
    sort(dept,dept+n);
    int i=1,j=0,res = 1,curr = 1;
    while(i<n && j<n){
        if(arr[i] <= dept[j]){
            i++;
            curr++;
        }
        else{
            j++;
            curr--;
        }
        res = max(curr,res);
    }
    return res;
}



int main(){
    int arr[] = {900,600,700};
    int dept[] = {1000,800,730};
    cout << "Maximum guest : " << maxGuestMeeting(arr,dept,3);
}