#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[9]={1,3,4,5,8,9,12,45,67};
    int n=9;
    int x=11;
    int lo=0;
    int hi= n-1;
    bool flag= false;
    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        
        if(arr[mid]==x){
            flag= true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
        


    }

    if(flag==false) cout<<arr[hi];

    
}