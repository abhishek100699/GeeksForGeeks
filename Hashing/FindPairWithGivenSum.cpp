/*You have been given an array and you have to find if there is a pair exist with the given sum value.*/
#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int sum){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;
}


int main(){
    int arr[] = {8,3,4,2,5};
    if(isPair(arr,5,6)){
        cout << "Yes Present !" << endl;
    }
    else{
        cout << "Not Present " << endl;
    }
}