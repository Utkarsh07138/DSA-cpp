#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(82);
    v.push_back(55);
    v.push_back(5);
    v.push_back(15);

    for(int i=0;i<=6;i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;

    vector<int> v1(v.size());
    for(int i=0;i<v1.size();i++){
        v1[i]= v[v.size()-1-i];
        cout<<v1[i]<<" ";
    }

}