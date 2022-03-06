#include<bits/stdc++.h>
using namespace std;



//naive solution
bool Powerof2(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2 !=0){
            return false;
        }
        n = n/2 ;
    }
    return true;
}


void ispoweroftwo(int n){
    if(n&(n-1) == 0){
        cout << "The bumber is power of two " << endl;
    }
    else{
        cout << "The number is not power of two " << endl;
    }
}


int main(){
    int n;
    cout << "Enter a number to find if it is power of two or not " << endl;
    cin >> n;
    /*
    if(Powerof2(n) != 0 ){
        cout << "Yes the umbe ris the poer of two " << endl;
    }
    else{
        cout << "The number is not power of two" << endl;
    }
    */
    ispoweroftwo(n);
}


/*****************************************************************************/
//Efficient solution.
/* The idea is simple if the number is the power of two then it would be having only one set bit so we can unset that bit using n&(n-1) 
and the final number will be zero*/


