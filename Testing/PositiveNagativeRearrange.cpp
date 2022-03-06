#include<bits/stdc++.h>
using namespace std;



void rearrange(int arr[], int n) {
	    // code here
	    vector<int> positive;
	    vector<int> negative;
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(arr[i] >= 0){
	            positive.push_back(arr[i]);
	        }
	        else{
	            negative.push_back(arr[i]);
	        }
	    }
        int i=0,j=0;
	    int k = 0;
        int y = 0 ;
	    while(i<positive.size() && j<negative.size()){
	        if(positive[i] >=0 && k%2 == 0){
	           // ans.push_back(positive[i]);
                arr[y] = positive[i];
                y++;
                i++;
	            k++;
	        }
	        else if(negative[j]<0 && k%2 !=0){
	            //ans.push_back(negative[j]);
                arr[y] = negative[j] ;
                y++;
                j++;
	            k++;
	        }
	    }
	    
	    while(i<positive.size()){
	       // ans.push_back(positive[i]);
           arr[y]  = positive[i] ;
           y++;
	        i++;
	    }
	    while(j<negative.size()){
	        //ans.push_back(negative[j]);
            arr[y] == positive[j];
            y++;
            j++;
        }
/*
        for(auto x:ans){
            cout << x << " ";
        }
        
  
int m=0;
  for(int i=0;i<n ;i++){
    arr[m] = ans[i];
    m++;

}

*/
int z = n ;
for(int i=0;i<z;i++){
    cout << arr[i] << " " ;
} 



	}

int main(){
    int arr[9] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    rearrange(arr,9);
//9 -2 4 -1 5 -5 0 -3 2
}