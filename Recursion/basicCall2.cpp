#include<iostream>
using namespace std;
int printNo(int n){
    if(n==0) return 0;
    cout<<"Enter no  "<< n <<endl;
    printNo(n-1);
    
    return 1; 
}
int main(){
    int n;
    cout<<"enter no: "<<endl;
    cin>>n;

    printNo(n);

}