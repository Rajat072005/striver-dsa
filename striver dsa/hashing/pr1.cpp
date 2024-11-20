#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"size : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cout<<"enter elements : ";
        cin>>arr[i];
    }
    // int hashArr[12] = {0};
    // int a;
    // cout<<"enter number : ";
    // cin>>a;

    // for(int j = 0 ; j<n ; j++){
    //     int num = arr[j];
    //     hashArr[num]++;
    // }
    
    // cout<<hashArr[a];

    map<int,int> mpp;

    for(int j = 0 ; j <n ; j++){
        mpp[arr[j]]++;
    }
    

    int a;
    cout<<"enter number : ";
    cin>>a;
    cout<<mpp[a];

}