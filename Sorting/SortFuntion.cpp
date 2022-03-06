// defining our own sort order in sort() function.
#include<bits/stdc++.h>
using namespace std;
class point{
    int x;
    int y;
} ;

bool MyCmp(point p1,point p2){
    return p1.x < p2.x ;
}



int main(){
    point arr[] = [{1,2},{4,3},{5,2},{7,3}];
    sort(arr,arr+4,MyCmp);
    for(int i=0;i<4;i++){
        cout << i.x << " " << i.y << endl;
    }
}