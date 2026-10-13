#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans= fibo(n-1)+fibo(n-2);
    return ans;
    
}
int main(){
    cout<<"enter the no "<<endl;
    int n;
    cin>>n;

    int ans = fibo(n);
    cout<<n<<"the term you want "<<ans;
}