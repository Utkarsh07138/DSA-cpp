#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    int original=n;
    while(n>0){
        reverse= reverse*10+(n%10);
        n=n/10;
    }
    if(reverse==original) cout<<reverse<<"pallindrome";
    else cout<<reverse<<"not";
}