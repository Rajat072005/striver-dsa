#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];
    vector<int> arr1;
    

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    arr1.push_back(arr[0]);
    for(int i = 1;i<n ; i++){
        if(arr[i] != arr1.back()){
            arr1.push_back(arr[i]);
            
        }
    }

    for(auto it:arr1){
        cout<<it<<" ";
    }
}

