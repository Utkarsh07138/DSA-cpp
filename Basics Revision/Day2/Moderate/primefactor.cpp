#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int minfactor;
    bool found= false;
    for(int i=2;i<=n-1;i++){
         minfactor=0;
        if(n%i==0){
            found= true;
            cout<<"not prime"<<" ";
            minfactor=i;
            cout<<minfactor;
            break;
            }
        
         } 
         if(found==false) cout<<"prime";
}