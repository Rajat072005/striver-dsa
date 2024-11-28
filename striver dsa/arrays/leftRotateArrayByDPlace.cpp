#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int d;
    cout<<"enter d : ";
    cin>>d;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    // int place = d%n;
    // int temp[place];
    // for(int i = 0 ; i<place ; i++){
    //     temp[i] = arr[i];
    // }

    // for(int i = place ; i<n ; i++){
    //     arr[i-place] = arr[i];
    // }

    // for(int i = n-place ; i<n ; i++){
    //     arr[i] = temp[i - (n-place)];
    // }
    // for(int i = 0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }

    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
}