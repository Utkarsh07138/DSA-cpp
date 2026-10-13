#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void solve(vector<int>& v,int i,int sum,int& maxi){
    if(i>=v.size()){
        // maxi update
        maxi= max(sum,maxi);
        return;
    }

    //include
    solve(v,i+2,sum+v[i],maxi);
    //exclude

    solve(v,i+1,sum,maxi);
}
int main(){
    vector<int> v{1,4,2,9};
    int maxi= INT_MIN;
    int sum=0;
    int i=0;

    solve(v,i,sum,maxi);
    cout<<maxi;


}