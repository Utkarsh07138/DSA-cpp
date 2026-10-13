#include<iostream>
using namespace std;
int main(){
    int a; cin>>a;
    int b; cin>>b;
    int c; cin>>c;
    if(a>b&&a>c) cout<<"a is largest";
    if(b>c && b>a) cout<<" b is largest";
    if(c>a && c>b) cout<<" c is largest";
}