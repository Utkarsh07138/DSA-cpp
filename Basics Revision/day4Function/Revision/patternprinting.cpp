#include<bits/stdc++.h>
using namespace std;
void pattern(int x){
    for(int i=0;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    pattern(3);
}
