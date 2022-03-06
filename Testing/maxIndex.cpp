#include<bits/stdc++.h>
using namespace std;

 
 
 
 
 void maxIndexDiff(int arr[], int n) 
    { 
        
        // Your code here
        int temp1;
        int temp2;
        int maxdiff = INT_MIN;
        for(int i=0;i<n;i++){
            int key = arr[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]>key && (j-i) > maxdiff){
                    maxdiff = j-i;
                    temp1 = j;
                    temp2 = i;
                }
            }
        }
        cout << "Max diff " << maxdiff << endl;
        cout << "The values " << arr[temp1] << " " << arr[temp2] << endl;
        
    }
    
int main(){
    int arr[7] = {82, 63, 44, 74, 82, 99, 82};
    maxIndexDiff(arr,7);
}    
    