#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('|| s[i]=='['|| s[i]=='{') {
            s1.push(s[i]);
        }
        else{

        if(s1.empty()){
            cout<<"Not Balanced";
            return 0;
        }
        }
        if((s[i]==')'&& s1.top()=='(') || (s[i]==']'&& s1.top()=='[')|| (s[i]=='}'&& s1.top()=='{')) s1.pop();
        
    }
    if(s1.size()==0){
        cout<<" Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}