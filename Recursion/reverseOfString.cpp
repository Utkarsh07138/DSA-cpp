#include<iostream>
#include<string>
using namespace std;
void reverseString(string &str,int start,int end){
    if(start>=end){
        return;
    }

    swap(str[start],str[end]);

    // baki recursion sambhal lega

    reverseString(str,start+1,end-1);
}
int main(){
    string str= "abfcedklnc";
    int start=0;
    int end=str.size()-1;
    reverseString(str,start,end);
    cout<<str;

}