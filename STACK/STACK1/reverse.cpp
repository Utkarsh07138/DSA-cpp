#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
while(st.size()>0){
        int x= st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;
    
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(140);

    print(st);
    stack<int> gt;
    stack<int> rt;
    while(st.size()>0){
        int x= st.top();
        gt.push(x);
        st.pop();
    }
    while(gt.size()>0){
        int x= gt.top();
        rt.push(x);
        gt.pop();
    }
     while(rt.size()>0){
        int x= rt.top();
        st.push(x);
        rt.pop();
    }
    cout<<endl;
    print(st);
}