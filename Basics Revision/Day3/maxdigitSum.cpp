#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    int digit;
    int currmax=0;
    int ans;

    for(int i=l;i<=r;i++){
        int sum=0;
        int c=i;
        while(c>0){
            digit=c%10;
            sum+=digit;
            c=c/10;
        }
        if(sum>currmax){
            currmax=sum;
            ans=i;
        
        }
    }
    cout<<ans;
}