#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit;
    int sum=0;
    int original=n;
    while(n>0){
        digit= n%10;
       digit= digit*digit*digit;
        sum+=digit;
        

        n=n/10;
    }
    if(sum==original) cout<<"armstrong";
    else cout<<"not";
}