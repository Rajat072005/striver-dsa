#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];
    int slargest;

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>largest){
            slargest= largest;
            largest=arr[i];
            
        }
        else if (arr[i]<largest && arr[i]>slargest)
        {
            slargest = arr[i];
            
        }
    }

    cout<<slargest;

}