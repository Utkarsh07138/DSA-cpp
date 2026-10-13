#include<iostream>
#include<algorithm>
using namespace std;
void printno(int n){
    if(n==0){
        return;
    }
    

    printno(n/10);
    int digit= n%10;
    cout<<digit<<" ";

    
    
    

    
}
int main(){
    int n= 649;
    printno(n);
}