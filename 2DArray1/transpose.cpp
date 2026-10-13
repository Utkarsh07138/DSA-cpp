#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows : ";
    cin>>m;
    int n;
    cout<<"enter no of columns : ";
    cin>>n;

    int arr[m][n];

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // for(int j=0;j<=n-1;j++){
    //     for(int i=0;i<=m-1;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int t[n][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            t[i][j]= arr[j][i];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }


}