#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;

    // insertion
    pair<string,int> pair1("love",2);
    m.insert(pair1);

    m["mera"]=1;
    cout<<m["mera"]<<endl;
    cout<<m["love"];
}