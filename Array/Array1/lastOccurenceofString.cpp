#include<iostream>
#include<string>
using namespace std;
// void lastOccurence(string &str,char target,int i,int &ans){
//     if(i>=str.length()){
//         return ;
//     }

//     if(str[i]==target){
//         ans= i;
//     }

//     lastOccurence(str,target,i+1,ans);
     
// }
// int main(){
//     string str= "abcdeddfde";
//     char target = 'c';
//     int i=0;
//     int ans=0;

//     lastOccurence(str,target,i,ans);
//     cout<<ans;
   

// }
void lastOccurence(string &str,char target,int i,int &ans){
    if(i<0){
        return;
    }

    if(str[i]==target){
        ans=i;
        return;
    }

    lastOccurence(str,target,i-1,ans);


}
int main(){
    string str= "abcdeddf";
    char target = 'g';
    int i=str.size()-1;
    int ans=0;

    lastOccurence(str,target,i,ans);
    cout<<ans;


}