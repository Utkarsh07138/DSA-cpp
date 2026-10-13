#include<bits/stdc++.h>
using namespace std;
bool isSpecial(int n){
    int sum=0;
    int product=1;
    int digit;
    while(n>0){
        digit=n%10;
        sum+= digit;
        product*=digit;
        n/=10;
    }
    if(sum==product) cout<<"special no";
}
int main(){
    int n;
    cin>>n;
    isSpecial(n);
}