#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    int y; cin>>y;
    if(x==0&&y==0) cout<<"origin";
    if(((x>0 &&y==0)||(x<0))&&(y==0)) cout<<"x axis";
    if(((y>0 &&x==0)||(y<0&&x==0)) cout<<"y axis";
    if(x>0&&y>0) cout<<"Quadrant-1";
    if(x<0&&y>0) cout<<"Quadrant-2";
    if(x<0&&y<0) cout<<"Quadrant-3";
    if(x>0&&y<0) cout<<"Quadrant-4";

}