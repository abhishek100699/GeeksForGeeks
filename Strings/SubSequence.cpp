/*You have been given two strings you have to find  that the given string s2 is the subsequence of s1 or not*/
#include<bits/stdc++.h>
using namespace std;



bool isSubSeq(string s1,string s2,int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return j==n2;
}

int main(){
    string s1 = "abhishek";
    string s2 = "abh";
    int n1 = s1.length();
    int n2 = s2.length();
    cout << "IS sub Sequence :" <<  isSubSeq(s1,s2,n1,n2) << endl;
}