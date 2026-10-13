#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int target=9;
    // s.find() searches in the set and then it return the last element 
    if(s.find(target)!=s.end()){
        cout<<" exists"<<endl;
    }
    else {
        cout<<" doesnt exists"<<endl;
    }
    for(int ele: s){
        cout<<ele<<" ";
    }
}