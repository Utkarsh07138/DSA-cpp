#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(104);
    v.push_back(11);
    v.push_back(61);
    v.push_back(91);
    v.push_back(50);
    v.push_back(101);
    v.push_back(6);
    v.push_back(19);
    v.push_back(104);
    v.push_back(21);
    v.push_back(61);
    v.push_back(1);
    v.push_back(70);
    v.push_back(801);

    cout<<" size is : "<<v.size()<<endl;
    cout<<" capacity is : "<<v.capacity()<<endl;


    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<" size is : "<<v.size()<<endl;
    cout<<" capacity is : "<<v.capacity()<<endl;


}