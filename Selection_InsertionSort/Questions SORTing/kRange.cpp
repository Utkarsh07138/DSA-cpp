#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[]={3,5,10};
    int n=3;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float kmin= (float)INT_MIN;
    float kmax= (float)INT_MAX;
    bool flag= true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin= max(kmin,(arr[i]+arr[i+1])/2);
        }

        else{
            kmax= min(kmax,(arr[i]+arr[i+1])/2);
        }
        if(kmax>kmin){
        flag=false;
        break;
        }
    }
    if(flag==false) cout<<-1;

    else{
        cout<<kmin<<" ,"<<kmax;
    }

}