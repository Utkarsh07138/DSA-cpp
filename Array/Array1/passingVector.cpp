#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(52);
    v.push_back(55);
    v.push_back(95);
    v.push_back(150);
    v.push_back(72);
    v.push_back(75);

    int x=1;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx=i;
    }
    cout<<idx;

}
