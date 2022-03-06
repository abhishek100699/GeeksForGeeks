/*You have been given two arrays and you have to find the count of elements which are present in the both arrays*/
#include<bits/stdc++.h>
using namespace std;


int interSectionOfArrays(int arr1[],int arr2[],int n,int m){
    unordered_set<int> s(arr1,arr1+n);
    int res = 0;
    for(int i=0;i<m;i++){
        if(s.find(arr2[i])!=s.end()){
            res++;
            s.erase(arr2[i]);
        }
    }
    return res;
}

int main(){
    int arr1[] = {2,3,4,5,5,4,3,5,6};
    int arr2[] = {12,3,3,4,5,3};
    cout << "Count of intersecting Element : "  << interSectionOfArrays(arr1,arr2,9,6);
}