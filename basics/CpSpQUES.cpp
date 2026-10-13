#include<iostream>
using namespace std;
int main(){
    cout<<"Cost Price is :";
    int cp;
    cin>>cp;
    cout<<"Selling Price is :";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"profit :"<<sp-cp;
    }
    if(cp>sp){
        cout<<"los: ;"<<cp-sp;
    }
    if(cp==sp){
        cout<<"No profit No Loss";
    }
}