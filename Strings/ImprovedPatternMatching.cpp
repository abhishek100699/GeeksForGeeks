/*Works only if the pattern has all distinct charactaor time O(n)*/

#include<bits/stdc++.h>
using namespace std;


void patternMatching(string &txt,string &pat){
    int n = txt.length();
    int m = pat.length();
    for(int i=0;i<=(n-m);){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
        }
        if(j==m){
            cout << i << " " ;
        }
        if(j==0){
            i++;
        }
        else{
            i=(i+j);
        }
    }
}

int main(){
    string txt;
    string pat;
    cout << "Enter the text string : " << endl;
    cin >> txt;
    cout << "Enter the pattern string : " << endl;
    cin >> pat;
    patternMatching(txt,pat);
}