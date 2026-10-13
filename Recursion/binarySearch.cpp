#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> v,int lo,int hi,int target){
    if(lo>hi){
        return -1;
    }
    int mid= lo+(hi-lo)/2;
    if(v[mid]==target){
        return mid;
    }
    if(v[mid]<target){
    return binarysearch(v,mid+1,hi,target);
}
else{
    return binarysearch(v,lo,mid-1,target);
}
}
int main(){
    vector<int> v{1,5,12,56,98,99};
    int n= v.size();
    int target= 98;
    int lo=0;
    int hi=n-1;
    int mid = lo+(hi-lo)/2;
    int ans= binarysearch(v,lo,hi,target);
    cout<<"answer is "<<ans;
}
