#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    v[0]=100;
}
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(02);
    v.push_back(55);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}