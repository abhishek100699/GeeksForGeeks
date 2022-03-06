#include<bits/stdc++.h>
using namespace std;

struct Myhash{
    int BUCKET;
    list<int> *table;

    void insert(int key){
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key){
        int i=key%BUCKET ;
        table[i].remove(key);
    }

    // Search function
    bool search(int key){
        int i=  key%BUCKET;
        for(auto x:table[i]){
            return true;
        }
        return false;
    }
};

