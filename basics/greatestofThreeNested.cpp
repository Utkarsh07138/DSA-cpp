#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 1st no";
cin>>a;
cout<<"Enter 2nd no";
cin>>b;
cout<<"Enter 3rd no";
cin>>c;
if(a>b){
    if(a>c){
        cout<<"a is greatest";
    }
    else{
        cout<<c<<"is greatest";
    }
}
else{ //b>a
    if(b>c){
        cout<<"b is greatest";
    }
    else{
        cout<<c<<"is greatest";
    }

}
}
