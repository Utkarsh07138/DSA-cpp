#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    bool found= false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            found= true;
            break;
            }
        
         } 
         if(found==false) cout<<"prime";
}
bool isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"perfect";
    }
}
int main(){
    int n;
    cin>>n;
    isPrime(n);
    isPerfect(n);
    

}