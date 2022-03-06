#include<bits/stdc++.h>
using namespace std;


//Naive solution
bool isPalindrome(string &str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    return rev == str;
}

// Efficient solution
bool isPal(string &str){
    int left = 0;
    int right = str.length()-1;
    while(left<=right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string str = "abababa";
   // cout << isPalindrome(str);
   cout << isPal(str);
}