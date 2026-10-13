#include<bits/stdc++.h>
using namespace std;
int reverse(int a){
    int reverse=0;
    while(a>0){
        reverse= reverse*10+(a%10);
        a=a/10;
    }
    return reverse;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(reverse(a)==b) cout<<"yes";
    else cout<<"no";

}