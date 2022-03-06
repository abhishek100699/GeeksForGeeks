#include<bits/stdc++.h>
using namespace std ;


bool isPresent(long long arr[] ,long long n,long long x){
	    long long low = 0;
	    long long high = n -1;
	    while(low<=high){
	        long long mid = (low+high)/2 ;
	        if(arr[mid] == x){
	            return true;
	        }
	        else if(arr[mid] < x){
	            low = mid+1;
	        }
	        else{
	            high = mid-1;
	        }
	    }
	    return false;
	}

	
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    long long  n1 = N  ;
	    long long n2 = M ;
	    vector<long long> ans;
        //first array ko sort nhi krna hai
	   // sort(A,A+n1);
	    sort(B,B+n2);
	    
	        for(long long i =0 ;i<n1;i++){
	            if(!isPresent(B,n2,A[i])){
	                ans.push_back(A[i]) ;
	            }
            }
	    
	   return ans; 
	    
	} 


int main(){
    //24 6
    long long arr[] = {227, 2, 17, 15, 17, 21, 26, 30, 16, 12, 19, 22, 18, 8, 24, 10, 17, 28, 14, 7, 4, 21, 3, 4};
    long long brr[] = {25, 12, 30, 24, 14, 34};
vector<long long> Ans = findMissing(arr,brr,24,6);
for(auto x:Ans){
    cout << x << " " ;
}
}    