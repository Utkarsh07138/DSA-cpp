#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    // 100 97 94 91.... -. n terms is 34
    int a=100;
    for(int i=1; i<=n;i++){ // a>0
        cout<<a<<endl;
        a = a-3;
    }
 }