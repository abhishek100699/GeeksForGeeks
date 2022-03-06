//Given an arrya you have to find the repeating element.

/*
->Size of the array > 2
->One element repeat any number of time.
->0<=max(arr) <= n-2
*/



#include<bits/stdc++.h>
using namespace std;

int findReapeating(vector<int> arr){
    int n = arr.size()-1;
    bool visited[n] ;
    for(int i=0;i<n;i++){
        visited[i] == false;
    }

    for(int i = 0;i<n;i++){
        if(visited[arr[i]] == true){
            return arr[i];
        }
        visited[arr[i]] = true;
    }
    return -1;
}


int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7};
    cout << "Repeating element : " << findReapeating(arr);
}


/*
This solution takes O(n) time complexity and O(n) extra space.
*/

/*
Another solution for this problem will be simply sorting the array and then traversing the array and if arr[i] = arr[i-1]
then element is found.
*/