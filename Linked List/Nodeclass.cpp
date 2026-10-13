#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int main(){
   Node a(10);
    Node b(20);
   Node c(40);
    Node d(50);

    a.next=&b;
    b.next=&c;
    c.next=&d;
    //a ke pass b ka access hai kse dekho
    // (*a.next)= 90; aise bhi kr skte hai
    // a.next->val=9;
    // cout<<&a<<endl;
    cout<<a.next<<endl;
    cout<<b.val<<endl;
    Node temp= a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}

