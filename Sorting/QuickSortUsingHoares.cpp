#include<bits/stdc++.h>
using namespace std;



int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void quickSort(int arr[],int l,int h){
    if(l<h){
        int p = partition(arr,l,h);
        quickSort(arr,l,p);
        quickSort(arr,p+1,h);
    }

}

int main(){
    int arr[9] = {2,5,4,3,9,7,8,1,6};
    quickSort(arr,0,8);
    for(int x:arr){
        cout << x << " " ;
    }
}