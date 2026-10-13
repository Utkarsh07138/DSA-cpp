#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {19,12,8,4,10};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";


    }
    cout<<endl;
    vector<int> v;
    for(int i=0;i<n;i++){
    v.push_back(arr[i]);
    sort(v.begin(),v.end());
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<" ";

    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }

}