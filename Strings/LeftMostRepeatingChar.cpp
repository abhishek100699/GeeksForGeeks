#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
// Naive Approach
int leftmostRepeating(string s){
    int n = s.length();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i] == s[j]){
                return i;
            }
        }
    }
    return -1;
}


//Better Approach
int leftMost(string s){
    int n = s.length();
    int res[CHAR] = {0};
    for(int i=0;i<n;i++){
        res[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(res[s[i]]>1){
            return i;
        }
    }
    return -1;
}




int main(){
    string s = "cabbda";
    int ans = leftmostRepeating(s);
    cout << "Left most repeating character is : " << s[ans] << endl;
    cout << "Left Most : " << s[leftMost(s)] << endl;
}