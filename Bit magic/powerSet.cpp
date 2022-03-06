//Given a string you have to find the all the power set of the string 


#include<bits/stdc++.h>
using namespace std;

void powerset(string str){
    int n = str.length();
    int powsize = pow(2,n);
    for(int count = 0 ;count<powsize;count++){
        for(int j=0;j<n;j++){
            if((count&(1<<j)) !=0){
                cout << str[j];
            }
        }
        cout << endl;
    }

}


int main(){
    string str = "abc";
    // cout << "The the string : " << endl;
    // cin >> str;
    powerset(str);
}