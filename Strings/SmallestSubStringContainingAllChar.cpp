/*Smallest window in a string containing all the characters of another string*/
#include<bits/stdc++.h>
using namespace std;

string smallestSubtring(string &s,string &p){
    int CHAR = 256;
    int mp[CHAR] = {0};
    int count = 0;
    for(int i=0;i<p.length();i++){
        if(mp[p[i]]==0)
        count++;
        mp[p[i]]++;
    }
    int start = 0;
    int i=0,j=0;
    int res = INT_MAX;
    while(j<s.length()){
        mp[s[j]]--;
        if(mp[s[j]]==0)
            count--;
        
        if(count==0){
            while(count == 0){
                if(j-i+1 < res){
                    res = j-i+1;
                    start = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] == 1)
                    count++;
                    i++;
                
            }
        }
        j++;
    }
    if(res!=INT_MAX) return s.substr(start,res);
    else
    return "-1";
}



int main(){
    cout << "Enter the first string " << endl;
    string s;
    cin >> s;
    cout << "Enter the second string : " << endl;
    string p;
    cin >> p;
    string ans = smallestSubtring(s,p);
    for(int i=0;i<ans.length();i++){
        cout << ans[i] ;
    }
}