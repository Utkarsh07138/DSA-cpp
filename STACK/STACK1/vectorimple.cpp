#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    vector<int> v;
    Stack(){
     ]
    }
    void push(int val){
      v.push_back()
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty";
            return;
        }
        v.pop_back();
    }
    int top(){
        
        return  v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size();
    cout<<endl;
    st.pop();
    cout<<st.size();
    cout<<endl;
    cout<<st.top();
}