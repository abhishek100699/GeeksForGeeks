/*You have been given an string you have to reverse it word wise*/
#include<bits/stdc++.h>
using namespace std;

void reverse(string &str,int start,int end){
    while(start <=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}

void reverseword(string &str){
    int n = str.length();
    int start = 0;
    for(int end=0;end<n;end++){
        if(str[end]== ' '){
            reverse(str, start,end-1);
            start = end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}

int main(){
    string str;
    getline(cin,str);
    reverseword(str);
    for(int i=0;i<str.length();i++){
        cout << str[i] ;
    }
}