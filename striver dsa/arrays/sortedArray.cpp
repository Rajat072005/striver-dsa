#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int flag = 1;

    for(int i = 1 ; i < n ; i ++){
        if(arr[i]  < arr[i-1]){
            flag = 0;

        }
    }
    cout<<flag;
}