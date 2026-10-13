#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n <= 1) {
        cout << "not prime";
        return 0;
    }
    bool flag= false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag= true;
            cout<<"not prime";
            break;
        }
    
    }
    if(flag==false) cout<<"prime";

}