/*Program to convert a decimal number into binary*/

#include<bits/stdc++.h>
using namespace std;


void decimal_to_binary(int n){
    if(n==0){
        return;
    }
    decimal_to_binary(n/2);
    cout << (n%2) ;
}

int main(){
    int n;
    cout << "Enter the decimal number ." << endl;
    cin >> n;
    decimal_to_binary(n);
}
