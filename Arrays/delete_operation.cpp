/*You have been given an array and an element you have to delete the element and retuen the resr of the array.*/
#include<bits/stdc++.h>
using namespace std;


int delete_element(int *arr,int size,int n){
    int i;
    for(i=0;i<size;i++){
        if(arr[i] == n){
            break;
        }
    }  
    if(i==size){
        return size;
    }
    for(int j=i;j<size-1;j++){
        arr[j] = arr[j+1];
    }
    return (size-1);

}


int main(){
    int arr[10] = {1,2,3,4,5,6,7};
    int n;
    cout << "Enter the element to be deleted " << endl;
    cin >>n;
    cout << "The array before the deletion : " ;
    for(int i=0;i<10;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    int ans = delete_element(arr,10,n);
    cout << "Ans : " << ans << endl;
    cout << "The array after the deletion is : " << endl;
    for(int i=0;i<ans;i++){
        cout << arr[i] <<  " " ;
    }

}