#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    int nfact= factorial(n);
    int rfact= factorial(r);
    int nrfact= factorial(n-r);
    int ncr= nfact/(rfact*nrfact);
    cout<<ncr;

}