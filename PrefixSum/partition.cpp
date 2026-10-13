#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5,10,5};
    int n= 7;
    // prefix sum nikalo
    for(int i=1;i<n;i++){
        arr[i]+= arr[i-1];
    }

    // partition kro
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        }

    }
    if(idx!=-1)cout<<"yes it can be partitioned"<<idx;
    else cout<<"cant be "<<idx;
}