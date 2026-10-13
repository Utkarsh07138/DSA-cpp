#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int y; cin>>y;
    int z; cin>>z;

    int a= x*x;
    int b= y*y;
    int c= z*z;

    if(((x<z&&y<z) || (x<y&&z<y) ||(y<x&&z<x))&&((a+b==c) ||(b+c==a) ||(c+a==b))) cout<<"Yes";
    else cout<<"No";

}