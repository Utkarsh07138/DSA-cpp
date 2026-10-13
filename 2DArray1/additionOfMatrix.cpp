#include<iostream>
using namespace std;
int main(){
    int a[2][3]={{4,3,6},{5,6,4}};
    int b[2][3]={{5,2,6},{6,1,2}};
    // int res[2][3];

    // //addition
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         res[i][j]= a[i][j]+b[i][j];
    //     }
    // }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }


}