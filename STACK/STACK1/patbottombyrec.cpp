#include<iostream>
#include<stack>
using namespace std;
void displaystack(stack<int>&st){
    if(st.size()==0) return; // base condition
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    displaystack(st);
    st.push(x);
}
void pushbottom(stack<int>&st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    } 
    int x=st.top();
    st.pop();
    displaystack(st);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    pushbottom(st,100);
    displaystack(st);
    

}