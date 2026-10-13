#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(string s){
    stack<char> ss;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') ss.push('(');
        else{
            if(ss.size()==0) return false;
            else ss.pop();
        }
    }
    if(ss.size()==0) return true;
    else return false;
}
int main(){
    string s= "(()";
    cout<<isbalanced(s);
}