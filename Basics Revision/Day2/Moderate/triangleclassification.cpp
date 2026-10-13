#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"valid";
        if(a==b&&b==c) cout<<"equitorial";
        else if((a==b && b!=c)||(b==c &&a!=b)||(a==c&&a!=b)) cout<<"isosceles";
        else cout<<"scalene";
    }
    else cout<<"invalid";
}