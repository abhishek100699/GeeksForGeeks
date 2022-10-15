#include<bits/stdc++.h>
using namespace std;



int helperfact(int n){
    if(n==0 || n==1){
        return n;
    }
    else return n*helperfact(n-1);
}

char* fact(int n){
    return (char*)(helperfact(n));
}

int main(){
    char* temp = fact(5);
    cout << temp << endl;
}