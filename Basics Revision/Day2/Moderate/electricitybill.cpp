#include<iostream>
using namespace std;
int main(){
    int unit;
    cin>>unit;
    int abunit;
    int bb;
    int ff;
    int ans;
    if(unit<=100) {
        // bb= unit*5;
        cout<<unit*5;
        return 0;
        
    }
    else if (unit>100&&unit<=200) {
        abunit= (unit%100)*(7);
        //  ans= abunit+bb;
        cout<<abunit+(unit*5);
        return 0;
    }
    // else if(unit>200){
    //      ff= unit-200;
    //     int newans= ans+(ff*10);
    //     cout<<newans;
    // }
    // else cout<<"invalid";

}