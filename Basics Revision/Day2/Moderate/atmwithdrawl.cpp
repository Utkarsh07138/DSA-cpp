#include<iostream>
using namespace std;
int main(){
    int accbalance, withamt;
    cin>>accbalance>>withamt;
    if((withamt%100==0)&&(withamt<=accbalance)&&(accbalance-withamt)>=500){
        cout<<"valid";
    }
    else cout<<"invalid";

}