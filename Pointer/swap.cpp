#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int a=96, b=1;
    int*x=&a;
    int *y=&b;
    swap(x,y);
    cout<<a<<" "<<b;

}