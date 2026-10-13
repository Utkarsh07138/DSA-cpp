#include<iostream>
#include<vector>
using namespace std;
void printSubarray_util(vector<int> &v,int start,int end){
    //base case
    if(end==v.size()){
        return;
    }


    // 1 case khud solve krdo
    for(int i=start;i<=end;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // baki recursion sambhal lega
     printSubarray_util(v,start,end+1);
}
void printSubarray(vector<int> &v){
    for(int start=0;start<v.size();start++){
        int end= start;
        printSubarray_util(v,start,end);
    }
}
int main(){
    vector<int> v{7,2,3,5,6};

    printSubarray(v);
    return 0;

}