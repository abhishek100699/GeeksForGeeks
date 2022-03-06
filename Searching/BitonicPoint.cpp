#include<bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n) {
	    // code here
	    int low=0,high=n-1;
        while(low<=high)
        {
            int mid = (low+high)/2 ;
            if( (mid==0 || arr[mid-1]<=arr[mid]) &&(mid==arr.size()-1 ||arr[mid+1]<=arr[mid] ))
                return mid;
            if( mid && arr[mid-1]>=arr[mid])
               high=mid-1;
            else
                low=mid+1;
        }
        return -1;
	}


int main(){
    int arr[9] = {1,15,25,45,42,21,17,12,11};
    cout << "Ans : " << findMaximum(arr,9);
}