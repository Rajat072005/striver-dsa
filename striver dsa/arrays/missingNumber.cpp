#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];
    
    

    for(int i = 0 ; i<n-1 ; i++){
        cin>>arr[i];
    }
    // int flag = 1;
    // int index = -1;

    // for(int i = 1 ; i <n ; i++){
    //     if(arr[i] != arr[i-1] +1){
    //         flag = 0;
    //         index = i-1;
    //         break;
    //     }
    // }
    // if(flag == 1){
    //     cout<<"no missing number"<<endl;
    // }
    // else{
    //     cout<<"missing number : "<<arr[index] + 1<<endl;
    // }
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0 ; i<n-1 ; i++){
        xor1 = xor1^arr[i];
        xor2 = xor2^(i+1);
    }
    xor2 = xor2^n;

    int ans = xor1^xor2;
    cout<<"missing no : "<<ans;

    
}