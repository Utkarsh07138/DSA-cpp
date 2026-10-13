#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max= INT_MIN;
    int secondmax= INT_MIN;
     bool foundsecond=false;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            // foundsecond= true;
            if(max!=INT_MIN){
                secondmax= max;
                foundsecond= true;
            }
            max= arr[i];
        }
        else if(arr[i]<max && arr[i]>secondmax){
            foundsecond= true;
            secondmax= arr[i];
        }
    }
    if(foundsecond==true)cout<<secondmax;
    else cout<<"none";
}