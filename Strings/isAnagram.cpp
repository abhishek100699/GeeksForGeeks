/*You have been given an pattern and a text you have to find if the pattern sis present as anagram in the text or not*/
#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;

// Naive Solution

bool isAnagram(string &pat,string &txt,int i){
    int count[CHAR] = {0};
    for(int j=0;j<pat.length();j++){
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}


bool isPresent(string &pat,string &txt){
    int n = txt.length();
    int m = pat.length();
    for(int i=0;i<=n-m;i++){
        if(isAnagram(pat,txt,i)){
            return true;
        }
    }
    return false;
}


// Efficient Solution
bool areSame(int CP[],int CT[]){
    for(int i=0;i<CHAR;i++){
        if(CP[i]!=CT[i]){
            return false;
        }
    }
    return true;
}
bool isAnagramEff(string &pat,string &txt){
    int CP[CHAR]={0};
    int CT[CHAR] = {0};
    for(int i=0;i<pat.length();i++){
        CP[pat[i]]++;
        CT[txt[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++){
        if(areSame(CP,CT)){
            return true;
        }
        CT[txt[i]]++;
        CT[txt[i-pat.length()]]--;
    }
    return false;
}



int main(){
    string txt;
    string pat;
    cout << "Enter the text : " << endl;
    cin >> txt;
    cout << "Enter the pattern : " << endl;
    cin >> pat;
    if(isAnagramEff(pat,txt)){
        cout << "The Anagram of the pattern is present in the string : " << endl;
    }
    else{
        cout << "No anagram of the given pattern is prsent"<< endl;
    }
}