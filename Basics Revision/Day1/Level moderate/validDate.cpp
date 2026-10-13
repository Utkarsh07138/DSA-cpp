#include<iostream>
using namespace std;
int main(){
    int dx; cin>>dx;
    int mx; cin>>mx;
    int yx; cin>>yx;

    // if(yx%400==0||(yx%4==0&&yx%100!=0)){
    //     if(dx!=0&&dx<=29&&mx==2) cout<<"valid";
    //     else cout<<"invalid";
    // }
    // if((yx%400!=0)||(yx%4!=0&&yx%100!=0)){
    //     if(dx<29&&mx==2) cout<<"valid";
    //     else  cout<<"invalid";
    // }

    // if(dx<=31&& (mx<=12&& mx!=2)){
    //     if(dx<=31&& (mx==1||mx==3||mx==5||mx==7||mx==8||mx==10||mx==12)) cout<<"valid";
    //     else if(dx>31&& (mx==1||mx==3||mx==5||mx==7||mx==8||mx==10||mx==12)) cout<<"invlaid";
    //     else if(dx>=31&& (mx==4||mx==6||mx==9||mx==11)) cout<<"invalid";
    //     else cout<<"valid";
    // }
    if(mx<=0|| mx>12){
        cout<<"invalid";
        return 0;
    }
    int maxdays;
    if(mx==2){
    if(yx%400==0||(yx%4==0&&yx%100!=0))
            maxdays=29;
        
        else maxdays= 28;
    }
    else if(mx==1||mx==3||mx==5||mx==7||mx==8||mx==10||mx==12){
        maxdays=31;
    }
    else{
         maxdays=30;
    }
    if(dx>=1&& dx<=maxdays)
        cout<<"valid";
    
    else cout<<"invalid";
    return 0;
}