#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// void reversepart(int i,int j,vector<int>&v){
//     while(i<j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;

//     }
// }

void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(82);
    v.push_back(55);
    v.push_back(5);
    v.push_back(15);

    display(v);



// reversepart(0,2,v);
reverse(v);
display(v);
}

    