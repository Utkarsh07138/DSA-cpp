#include<iostream>
using namespace std;
int main(){
    int age=16;
    if(age<18){
        goto Noteligible;
    }
    else{
        cout<<"You can vote";
    }
    Noteligible:
    cout<<"You cant;
}