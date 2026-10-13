#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        if(b<c) cout<<c;
        else cout<<b;
        return 0;
    }
    else if(b>a&&b>c){
        if(a<c) {
            cout<<c;
        }
        else cout<<a;
        return 0;
    }
    else if(c>a&&c>b){
        if(a<b) {cout<<b;
        }else cout<<a;
        return 0;
    }
    else cout<<"Not valid";
}