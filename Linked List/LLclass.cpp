#include<iostream>
using namespace std;
class Node{
    public:
    Node*next;
    int val;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
    public:
    Node*head;
    Node*tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
    Node*temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
    }
    void insertAtHead(int val){
        Node*temp= new Node(val);
        if(size==0)head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
    }
void insertAtIdx(int idx,int val){
    if(idx<0 || idx>size) {
        cout<<"invalid indx"<<endl;
        return;
    }
    else if(idx==0) {
        insertAtHead(val);
        return;
    }
    else if(idx==size) {
        insertAtEnd(val);
        return;
    }
    else{
        Node *t= new Node(val);
        Node *temp=head;
        for(int i=0;i<idx-1;i++)temp= temp->next;
        t->next= temp->next;
        temp->next=t;
        size++;

    }
}
int getatidx(int idx){
    if(idx<0 || idx>=size){
        cout<<"invalid size";
        return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        Node* temp= head;
        for(int i=1;i<=idx;i++)temp=temp->next;
        return temp->val;
    }
}
void deleteAtHead(){
    if(size==0){
        cout<<"list is empty ";
        return;
    }
    else{
        head= head->next;
        size--;
    }
}
void deleteAtTail(){
    if(size==0){
        cout<<"list is empty ";
        return;
    }
    Node* temp= head;
    while(temp->next!=tail)temp=temp->next;
    temp->next=NULL;
    tail=temp;
    size--;
}
void deleteAtIdx(int idx){
    if(size==0){
        cout<<"list is empty ";
        return;
    }
    else if(idx<0 || idx>=size){
        cout<<"invalid list ";
        return;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node* temp= head;
        for(int i=1;i<=idx-1;i++)temp= temp->next;
        temp->next=temp->next->next;
        size--;
    }

}
    void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
        
    }
    cout<<endl;

}
};



int main(){
 LinkedList ll;
ll.insertAtEnd(10);
ll.insertAtEnd(20);
ll.display();
ll.insertAtEnd(55); 
ll.insertAtIdx(1,90);
ll.display();
//ll.deleteAtHead();
//ll.display();
//ll.deleteAtTail();
//ll.display();
cout<<ll.getatidx(2)<<endl;
ll.deleteAtIdx(1);
ll.display();

}