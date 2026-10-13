#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int> &v,int & n,int i){
    if(i==n-1){
        return true;
    }
    // 1 case khud kro
    if(v[i+1]<v[i]){
        return false;
    }


    // baki recursion sambhal lega
     return isSorted(v,n,i+1);
}
int main(){
    vector<int> v{1,5,7,3};
    int n= v.size();
    int i=0;
    
    bool checkSorted = isSorted(v,n,i);
    if(checkSorted){
        cout<< " Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}