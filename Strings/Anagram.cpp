#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;

//naive approach
bool isAnagram(string s1,string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    if(n1!=n2){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}

// Efficient Solution
bool isAnagramEff(string s1,string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    if(n1!=n2){
        return false;
    }
    int res[CHAR]={0};
    for(int i=0;i<n1;i++){
        res[s1[i]]++;
        res[s2[i]]--;
    }
    for(int i=0;i<n1;i++){
        if(res[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "aabca";
    string s2 = "abaca";
    cout << isAnagram(s1,s2) << endl;
    cout << isAnagramEff(s1,s2) << endl;
}