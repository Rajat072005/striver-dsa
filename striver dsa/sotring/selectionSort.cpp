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

    for(int i = 0 ; i<=size-2 ; i++){
        int mini = i;
        for(int j = i ; j<size;j++){
            if(arr[j] < arr[mini]){
                swap(arr[j] , arr[i]);
            }
        }
    }

    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }

}