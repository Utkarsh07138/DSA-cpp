#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
        
    }
        while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    
    }
}
    void bottom(stack<int> &st, int val ){
        stack<int>temp;
        while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
    void pushatidx(stack<int>&st, int idx,int val){
        stack<int>temp;
        while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>idx){
        st.push(temp.top());
        temp.pop();
    }
    }

    int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    bottom(st,5);
    print(st);
    cout<<endl;
    pushatidx(st,1,220);
    print (st);

}