/*you ahve been given an string and an pattern you have to print the every occurences of this pattern*/
#include<bits/stdc++.h>
using namespace std;


void patSearchinng(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
        }
        if(j==m)
        cout<<i<<" ";
    }
}

int main(){
    string txt;
    string pat;
    cout << "Enter the text string : " << endl;
    cin >> txt;
    cout << "Enter the pattern string : " << endl;
    cin >> pat;
    patSearchinng(txt,pat);
}