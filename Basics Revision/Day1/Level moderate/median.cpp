#include<iostream>
using namespace std;
int main(){
    int a; cin>>a;
    int b; cin>>b;
    int c; cin>>c;
    if((a>b&&a<c) || (a<b&&a>c)) cout<<a;
    if((b>a&&b<c)||(b<a&& b>c)) cout<<b;
    if((c>a&&c<b)||(c<a&& c>b)) cout<<c;
}