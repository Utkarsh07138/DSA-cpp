#include<iostream>
using namespace std;
int main(){
    short x=200;
    int y;
    y=x;
    cout<<"The value of x:"<<x<<endl;
    cout<<"The value of y:"<<y<<endl;

    int  num=20;
    char ch='a';
    int r= 20+'a';
    cout<<"Typecasting char into datatyppe('a'to 20) : " <<r<<endl;

    float value= num+'A';
    cout<<"Typecasting int into float : "<<value<<endl;
}