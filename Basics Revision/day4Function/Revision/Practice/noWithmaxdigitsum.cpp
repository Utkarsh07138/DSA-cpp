#include<bits/stdc++.h>
using namespace std;
int digitsum(int L, int R){
    int maximum=0;
    int ans;
    for(int i=L;i<=R;i++){
        int sum=0;
        int c=i;
        while(c>0){
            int digit= c%10;
            sum+=digit;
            c=c/10;

        }
        if(sum>maximum){
            maximum= sum;
            ans=i;
        }
        
    }
    cout<<ans;
}
int main(){
    int L,R;
    cin>>L>>R;
    digitsum(L,R);

}