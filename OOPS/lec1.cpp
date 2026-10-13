#include<iostream>
using namespace std;
class Player{
public:
    int score; //data members
    int health;
 public:
    int age;
    void showhealth(){
        cout<<"Health is : "<<health<<endl;
    }
};

int main(){
    int score[100]= {};
    int health[19]={};
    Player amit;
    amit.score=99;
    amit.health=20;
    amit.age= 18;
    amit.showhealth();

    cout<<amit.score<<endl;
    cout<<amit.age<<endl;

    Player gaurav;
    gaurav.score=9;
    gaurav.health=11;
    gaurav.age=18;
    
    
}