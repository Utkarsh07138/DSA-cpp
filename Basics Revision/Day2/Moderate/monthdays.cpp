#include<iostream>
using namespace std;
int main(){
    int month,year;
    cin>>month>>year;
    int days;
    if(month<1||month>12){
        cout<<"invalid";
        return 0;
    }
    if(month==2){
        if(year%400==0||(year%4==0&&year%100!=0)){
            days= 29;
            cout<<days;
            return 0;
        }
        else {
            days=28;
            cout<<days;
            return 0;
        }
    }
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        days=31;
        cout<<days;
        return 0;
    }
    else{
        days=30;
        cout<<days;
        return 0;
    }
}