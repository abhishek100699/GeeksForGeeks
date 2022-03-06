#include<bits/stdc++.h>
using namespace std;


    void removeDuplicates(vector<int>& nums) {
        int res =1;
        for(int i=1;i<nums.size() ;i++){
            if(nums[i]!=nums[res-1]){
                nums[res] = nums[i];
                res++;
            }
        }
        cout << "Array Size : " <<  nums.size() << endl;
        for(auto x:nums){
            cout << x << " " ;
        }
    }

    int main() {
        vector<int> arr = {1,2,2,2,3,4,5,5,6};
        removeDuplicates(arr);
    }
