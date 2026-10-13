#include<iostream>
using namespace std;
int Checkstring(string s,int n,int i,char key){
    if(i>=n){
        return -1;
    }
    // 1 case solve krdo 
    if(s[i]==key){
        return i;
    }
    //baki recursion sambhal lega

    return Checkstring(s,n,i+1,key);

}
int main(){
    string s= "utkarshsingh";
    int n= s.size();
    int i=0;
    char key='r';
    int ans= Checkstring(s,n,i,key);
    cout<<ans;
    return 0;
    

}