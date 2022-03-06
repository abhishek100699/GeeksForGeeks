// Selection sort


#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> arr){
    int n = arr.size() ;
    for(int i=0;i<n-1;i++){
        int min_indx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[min_indx]){
                min_indx = j;
            }
        }
        swap(arr[min_indx] ,arr[i]);
    }
    
    cout << "The Sorted array is : " << endl;
    for(auto x:arr){
        cout << x << " " ;
    }
}


int main(){
    vector<int> arr = {5,63,2,3,7,9,55,1};
    SelectionSort(arr);
}