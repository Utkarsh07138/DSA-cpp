#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int count;
    while(n>0){
        count= n%10;
        sum+=count;
        n=n/10;
    }
    cout<<sum;
}