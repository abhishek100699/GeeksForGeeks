/*you have been given an array you have to count the frequencies of each element in the array */


#include<bits/stdc++.h>
using namespace std;

void frequencie(int arr[] , int n){
    int i=1;
    while(i<n){
        int count = 1;
        while(i<n && arr[i] == arr[i-1]){
            count++;
            i++;
        }
        
        cout << "Frequency of " << arr[i-1] << " is " << count << endl;
        i++;
        if(n==1 || arr[n-1] != arr[n-2]){
            cout << "Frequency of " << arr[n-1] << " is " << 1;
        }
    }
}


int main(){
    cout << "Enter the size of the array " << endl;
    int n;
    cin >> n;
    int arr[n] ;
    cout << "Enter the array elements " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    cout << endl;
    frequencie(arr, n);
}