#include<iostream>
#include<climits>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<" "<<endl;

}

void change(int b[]){
    b[0]=100;
}

int main(){
    int arr[]={4,6,8,2,7};

    display(arr);
    change(arr);
    display(arr);
}