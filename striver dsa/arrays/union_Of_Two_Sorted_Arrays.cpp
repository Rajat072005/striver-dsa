#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"size of array 1 : ";
    cin>>n;
    vector <int> unionArr;
    int arr1[n];
    
    // set <int> s;

    for(int i = 0 ; i<n ; i++){
        cin>>arr1[i];
    }
    cout<<"size of array 2 : ";
    cin>>m;
    int arr2[m];
    for(int i = 0 ; i<m ; i++){
        cin>>arr2[i];
    }

    // for(int i = 0; i<n ; i++){
    //     s.insert(arr1[i]);
    // }
    // for(int i = 0; i<m ; i++){
    //     s.insert(arr2[i]);
    // }
    int a = 0;
    int b = 0;
    while(a<n && b<m){
        if(arr1[a]<=arr2[b] ){
            if(unionArr.size() == 0 || unionArr.back() != arr1[a]){
                unionArr.push_back(arr1[a]);
            }
            a++;
            
        }
        else{

            if(unionArr.size() == 0 || unionArr.back() != arr2[b]){
                unionArr.push_back(arr2[b]);
            }
            b++;
        }
    }

    while(a<n){

        if(unionArr.size() == 0 || unionArr.back() != arr1[a]){


            unionArr.push_back(arr1[a]);
        }
        a++;    
    }
    while(b<m){

        if(unionArr.size() == 0 || unionArr.back() != arr2[b]){
            unionArr.push_back(arr2[b]);
        }

        b++;

    }

    for(auto it: unionArr){
        cout<<it<<" "; 
    }
}