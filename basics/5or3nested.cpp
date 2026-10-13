#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer :";
    int x;
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"Number is divisible";
        }
        else{
            cout<<"Not divisible";
        }
        
    }
}