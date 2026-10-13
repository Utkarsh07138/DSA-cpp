#include<iostream>
#include<limits.h>
using namespace std;
void findmax(int arr[],int n,int i,int& max){
    if(i>=n){
        return;
    }

    if(arr[i]>max){
        max= arr[i];
    }
    
    // baaki recursion sambhal lega
    findmax(arr,n,i+1,max);

}
int main(){
    int arr[]= {41,88,32,45,11,2,63};
    int n=7;
    int max= INT_MIN;
    int i=0;
    findmax(arr,n,i,max);
    cout<<max<<endl;
}