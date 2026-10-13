#include<iostream>
using namespace std;
void mergeSort(int* arr,int s,int e){
    int mid= (s+e)/2;

    int len1= mid-s+1;
    int len2= e-mid;

    //dynamic array bnao
    int* left= new int[len1];
    int* right= new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]= arr[k];
        k++;
    }
     k=mid+1;
    for(int i=0;i<len2;i++ ){
        right[i]=arr[k];
        k++;
    }
    // merge logic
    int leftIndex= 0;
    int rightIndex= 0;
    int mainarrayIndex= s;
    
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainarrayIndex++]= left[leftIndex++];
        }
        else{
             arr[mainarrayIndex++]= right[rightIndex++];
        }
    }

    //copy logic for the firsr array
    while(leftIndex<len1){
        arr[mainarrayIndex++]= left[leftIndex++];
    }

     while(rightIndex<len2){
        arr[mainarrayIndex++]= right[rightIndex++];
    }

}
void merge(int* arr,int s,int e){
    if(s>=e) return ;

    int mid= (s+e)/2;
    //left part sort krdo recursion bhaiya
    merge(arr,s,mid);

    //right part sort krdo 
    merge(arr,mid+1,e);

    mergeSort(arr,s,e);

}
int main(){
    int arr[]= {41,85,22,33,5,41};
    int n= 6;
    int s= 0;
    int e= n-1;
    
    merge(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}