/*You have been given an String ans a roataion of it you have to find if it can be found roating the original string*/
#include<bits/stdc++.h>
using namespace std;


bool checkRotation(string &s1,string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    return ((s1+s1).find(s2)!=string::npos);
}

int main(){
    string s1 ;
    string s2 ;
    cout << "Enter the original string : " << endl;
    cin >> s1;
    cout << "Enter the rotation of the string : " << endl;
    cin >> s2;
    if(checkRotation(s1,s2)){
        cout << "Strings are roataions of each other. " << endl;
    }
    else{
        cout << "Strings are not roations of each other." << endl;
    }
}