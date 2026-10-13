#include<iostream>
using namespace std;
bool isPallindrome(string&str,int start,int end){
    //base case
    if(start>=end){
        return true;
    }



    // 1 case solve krdo
    if(str[start]!=str[end]){
        return false;
        
    }
    


    // baki recursion sambhal lega
    return isPallindrome(str,start+1,end-1);

    
}
int main(){
    string str;
    cin>>str;
    
    cout<<isPallindrome(str,0,str.size()-1)<<endl;
    
}