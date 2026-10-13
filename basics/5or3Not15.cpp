#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer :";
    int x;
    cin>>x;
    if((x%3==0 || x%5==0) && x%15!=0){
        cout<<"The no is div by 3 or 5 but not by 15";
    }
    else{
        cout<<"the no is not div by 3 or 5 and div by 15";

    }
}