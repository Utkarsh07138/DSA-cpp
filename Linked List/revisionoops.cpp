#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    //constructor
    Student(string name,int rno,float marks){
        this->name=name;
        this->rno= rno;
        this->marks=marks;
    }
    void change(Student*s){
        s->name="utk";
    }

    


};
int main(){
    Student s("Harsh",14,87.9);
    // Student* ptr=&s;
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name;
    // //(*ptr).name="utkarsh"; this can also be written as
    // ptr->name="utkarsh";

    cout<<s.name;
    
    
}