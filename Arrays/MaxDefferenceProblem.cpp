/* You have been given an array you have to find the max difference of the array elements such that j> i where 
j and i are the indexs of the array elements.
*/

#include<bits/stdc++.h>
using namespace std;

int maxDifference(int arr[] ,int n){
    int res = arr[1]-arr[0] ;
    int minval = arr[0] ;
    for(int j=1;j<n;j++){
        res = max(res ,(arr[j]-minval));
        minval = min(minval, arr[j]);
    }
    return res;
}


int main(){
    cout << "Enter the size of the array : " <<  endl;
    int n;
    cin >> n;
    cout << "Enter the array : " << endl;
    int *arr = new int(n);
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    int ans = maxDifference(arr,n);
    cout << "The max diffrence is : " << ans << endl;



}