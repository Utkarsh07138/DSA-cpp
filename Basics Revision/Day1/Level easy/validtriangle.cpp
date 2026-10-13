#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int y;  cin>>y;
    int z; cin>>z;
    int a= x*x;
    int b= y*y;
    int c= z*z;
    if((x+y>z)&&(y+z>x)&&(x+z>y)){
        if(x<y&&z<y){
            if(a+c>b) cout<<"acute";
            else cout<<"obtuse";
        }
        if(y<x&&z<x){
            if(b+c>a) cout<<"acute";
            else cout<<"obtuse";
        }
        if(x<z&&y<z){
             if(a+b>c) cout<<"acute";
            else  cout<<"obtuse";
        }
        if(a+b==c) cout<<"right";

    }
    else cout<<"not triangle";
}