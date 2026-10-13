#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "BGXYZZWUDVXZ";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>'V'){
            str.push_back(s[i]);
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<str[i];
    }

    cout<<endl;
    int n=str.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
           
    
        
    }
    cout<<str;

    

}