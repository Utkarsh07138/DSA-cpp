#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    mp["Ragahav"]= 15;
    mp["Ram"]= 22;
    cout<<mp.size();
    for(auto:mp){
        cout<<"Ram";
    }
}