#include<iostream>
#include<vector>
using namespace std;
void change(int arr[3][3]){
    arr[0][0]=100;
}
int main(){
    int arr[3][3]= {{4,5,2},{5,9,7},{7,3,4}};
    cout<<arr[0][0]<<endl;
    
    change(arr);
    cout<<arr[0][0];
}