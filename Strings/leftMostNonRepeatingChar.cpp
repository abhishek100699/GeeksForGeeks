#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

//Naive Solution
int leftMostNonRep(string s){
    int n = s.length();
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<n;j++){
            if(i!=j && s[i]==s[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            return i;
        }
    }
    return -1;
}

// better approach
int leftMost(string s){
    int n = s.length();
    int res[CHAR] = {0};
    for(int i=0;i<n;i++){
        res[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(res[s[i]] == 1){
            return i;
        }
    }
    return -1;
}


int main(){
    string s = "aabbc" ;
    cout << s[leftMostNonRep(s)] << endl;
    cout << s[leftMost(s)] << endl;
}