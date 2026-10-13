#include<iostream>
using namespace std;
bool Checkstring(string s,int n,int i,char key){
    if(s[i]!=key){
        return false;
    }
    // 1 case solve krdo 
    if(s[i]==key){
        return true;
    }
    //baki recursion sambhal lega

    return Checkstring(s,n,i+1,key);

}
int main(){
    string s= "utkarsh singh";
    int n= s.size();
    int i=0;
    char key='u';
    bool ans= Checkstring(s,n,i,key);
    cout<<ans;
    

}