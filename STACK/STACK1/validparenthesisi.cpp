#include<iostream>
#include<stack>
using namespace std;
bool isBalance(stack<string>s1, string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'||'('||'[') s1.push('{'||'('||'[');
        if((s[i]==']'||'}'||')')&&(s1.top()=='[','{','(')) s1.pop();
        else cout<<"Not Balanced";
        
    }
    if(s.size()==0) cout<<"Balanced";
    else cout<<"Not Balanced";
}

int main(){
    string s= {'(','{','[',')',']','}'};
    stack<string> s1;
    isBalance(s1,s);
}