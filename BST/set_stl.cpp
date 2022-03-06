/*Sets are used to store the sorted data*/

#include<bits/stdc++.h>
using namespace std;



int main(){
    set<int> s;
    s.insert(10);
    s.insert(4);
    s.insert(13);
    s.insert(5);
    s.insert(60);
    s.insert(90);

    for(int x:s){
        cout << x << " " ;
    }

    cout << endl;

    // iterator in the set
    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout << *it << " " ;
    }
    cout << endl;
    // reverse iterator
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout << *it << " " ;
    }
    cout << endl;
    //  Find function in set
    it = s.find(13);
    if(it!=s.end()){
        cout << "Element is present in the set" << endl;
    }
    else{
        cout << "Element is not present in the set " << endl;
    }


    // clear() functions remove all the elements form the set.

    // erase() fnction is used to remove an particular element form the set
    s.erase(13);
    
    for(int x:s){
        cout << x << " " ;
    }

    // we can also pass iterator in the erase function
    s.insert(13);
    auto itr = s.find(13);
    s.erase(itr);
    cout << endl;
    for(auto x: s){
        cout << x << " " ;
    }

    s.insert(13);
    // we can use the erase function to remove a range of element 
    itr = s.find(13);
    s.erase(itr,s.end());
    cout << endl;
    for(auto x: s){
        cout << x << " " ;
    }

    s.insert(12);
    s.insert(23);
    s.insert(20);
    s.insert(27);
    s.insert(11);
    s.insert(19);
    cout << endl;
    for(int x:s){
        cout << x << " " ;
    }
    cout << endl;

    // lower_bound() function

    itr = s.lower_bound(15);
    if(itr!=s.end()){
        cout << *itr << endl;
    }
    else{
        cout << "The searched element is grater than the largest " << endl;
    }
       

}