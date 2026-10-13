#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int y; cin>>y;
    int z; cin>>z;
    if(x==y&&y==z&&x==z) cout<<"all are equal";
    if((x==y&&y!=z)||(x==z&&y!=z)||(y==z&&y!=x)) cout<<"two are equal";
    if(x!=y&&y!=z&&x!=z) cout<<"none are equal";

}