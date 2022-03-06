#include<bits/stdc++.h>
using namespace std;


int UnionOfTwoArray(int arr1[],int arr2[],int n1,int n2){
    unordered_set<int> s(arr1,arr1+n1);
    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }
    return s.size();

}


int main(){
    int arr1[] = {1,2,2,3,4,5,5,5,4,6};
    int arr2[] = {3,4,6,8,9,9,9,8,7,7};
    cout << "Number of distinct elements in both the arrays are : " << UnionOfTwoArray(arr1,arr2,10,10) << endl;
}