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
    int maxi = arr[0];

    for(int i = 1 ; i < n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    cout<<maxi;
}