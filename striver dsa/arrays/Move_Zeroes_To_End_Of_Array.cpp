#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];
    // int num = 0;
    int j = -1;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    // for(int i = 0 ; i < n ; i ++){
    //     if(arr[i]==0){
    //         num++;
    //     }
    // }

    // for(int i = 0 ; i<n ; i++){
    //     if(arr[i] != 0){
    //         arr[j] = arr[i];
    //         j++;
    //     }
    // }

    // for(int i = n-num ; i<n ; i++){
    //     arr[i] = 0;
    // }

    for(int i =0 ; i<n ; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
    for(int i = j+1 ; i<n ; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }



}