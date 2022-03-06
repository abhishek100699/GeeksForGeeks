/*Given a number you have to count set bits in its binary representation */
#include<bits/stdc++.h>
using namespace std;

// Naive solution.

int numberofSetBits(int n){
    cin >> n;
    int count = 0;

    while(n>0){
        if((1 & n) == 1){
            count++;
            n = n>>1;
        }
        else{
            n = n>>1;
        }
    }
    return count;
}

// Efficient solution
//Brian Kerningam's Algorithm
int countBits(int n){
    int count = 0;
    while(n>0){
        n = (n & (n-1)) ;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter the number : " << endl;
    cout << "Number of bits is " << numberofSetBits(n) << endl ;
    cout << "Number of bits in the binary representation of the number by Brian Kerningam's method is : " << countBits(n) << endl;
}


