#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    // 2 6 18 54...
    int a=2;
    for(int i=1; i<=n;i++){
        cout<<a<<endl;
        a=a*3;
    }
 }