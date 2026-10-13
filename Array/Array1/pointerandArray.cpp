#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,8,4,5};
    int* ptr= arr;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
        
    }
    cout<<endl;

    ptr=arr;
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}