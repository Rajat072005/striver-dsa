#include <bits/stdc++.h>
using namespace std;

int main(){
    int size ; 
    cout<<"enter size : ";
    cin>>size;
    int arr[size];

    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    for(int i = size-1 ; i>=1 ; i--){
        for(int j = 0 ; j<= i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
}