/*Given an array you have to count the number of distinct elements present in the array.*/
#include<bits/stdc++.h>
using namespace std;


//Naive Approach
int countDistinct(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
            count++;
        }
    }
    return count ;
}

// Efficient solution
int countDistinctUsingHashing(int arr[],int n){
    unordered_set<int> s;
    // it the item is present then it doesn't insert.
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}
//Improved Efficient solution
int countDistinctImproved(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}



int main(){
    int arr[] = {1,2,2,3,5,5,5,6,7,8};
    //cout << "Distinct elements are : " <<countDistinct(arr,10) << endl;
    cout << "The distinct elements are : " << countDistinctUsingHashing(arr,10) << endl;
    cout << "Count Improved  : " << countDistinctImproved(arr,10);
}