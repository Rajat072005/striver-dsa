#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    
    cout<<"size of array 1 : ";
    cin>>n;
    int arr1[n];

    for(int i = 0 ; i<n ; i++){
        cin>>arr1[i];
    }
    cout<<"size of array 2 : ";
    cin>>m;
    int arr2[m];
    for(int i = 0 ; i<m ; i++){
        cin>>arr2[i];
    }
    vector<int> ans;

    int a = 0;
    int b = 0;

    while(a<n && b<m){
        if(arr1[a]<arr2[b]){
            a++;
        }
        if(arr1[a]>arr2[b]){
            b++;
        }
        else if(arr1[a] == arr2[b]){
            ans.push_back(arr1[a]);
            a++;
            b++;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}

