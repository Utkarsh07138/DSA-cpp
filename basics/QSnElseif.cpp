#include<iostream>
using namespace std;
int main(){
    cout<<"Enters marks :";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n>=81){
            cout<<"Very good";
        }
        else{
            if(n>=61){
                cout<<"Average";
            }
            else{
                if(n>=41){
                    cout<<"Below average";
                }
                else{
                    cout<<"Fail";
                }
            }
        }
    }
}