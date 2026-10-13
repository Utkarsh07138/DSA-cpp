#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,6,8,0};
    int n=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min= arr[j];
                minidx=j;
            }
            swap(arr[i],arr[minidx]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}