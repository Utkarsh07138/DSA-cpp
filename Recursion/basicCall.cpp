#include<iostream>
#include<algorithm>
using namespace std;
int factorial(int n){
    cout<<"Function is called for:"<<n<<endl;
    if(n==1) return 1;
    int chotiProb= factorial(n-1);
    int badiProb= n*chotiProb;
    return badiProb;
}
int main(){
    int n;
    cout<<"value of n"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
    
}