/*Check weather the given string is palindrome or not .*/
#include<bits/stdc++.h>
using namespace std;

bool check_plaindrome(char *str, int start ,int end){
    if(start >= end){
        return true;
    }
    return ((str[start] == str[end]) && check_plaindrome(str,start+1,end+1)) ;
}

int main(){
    char a[] = "abba";
    int l = strlen(a);
    cout << "The String is " << check_plaindrome(a,0,l-1);
}
