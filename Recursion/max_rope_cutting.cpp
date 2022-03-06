//given the length of the array u have to find the 

#include<bits/stdc++.h>
using namespace std;


int maxrope(int n, int a, int b, int c) { 
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int ans  = std::max({maxrope(n-a,a,b,c),maxrope(n-b, a,b,c),maxrope(n-c,a,b,c)}) ;
    if(ans == -1){
        return -1;
    }
    else{
        return ans+1;
    }
}

int main(){
    cout << "Enter the values of n,a,b,c : " << endl;
    int n,a,b,c ;
    cin >> n >> a >> b >> c ;
    cout << "The max no of ropes : " << maxrope(n,a,b,c) ;
}