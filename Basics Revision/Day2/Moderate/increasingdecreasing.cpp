#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a,cin>>b,cin>>c;
    if(a>b&&a>c){
        if(b<a&&b>c) cout<<"decreasing";
        else cout<<"neither";
        return 0;
    }
    else if(c>a&&c>b){
        if(b>a&&b<c) cout<<"increasing";
        else cout<<"neither";
    }
    else cout<<"neither";
}