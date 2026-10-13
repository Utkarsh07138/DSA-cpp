#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int digit;
    int original=n;
    while(n>0){
        digit=n%10;
        int product=1;
        for(int i=1;i<=digit;i++){
            product*=i;
        }
        sum+=product;
        n=n/10;
    }
    if(original==sum) cout<<"strong";
    else cout<<"not strong";

}