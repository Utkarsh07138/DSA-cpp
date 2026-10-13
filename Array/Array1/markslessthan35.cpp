#include<iostream>
using namespace std;
int main(){
    int marks[5]={4,55,20,63,85};
    for(int i=0;i<=4;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}