#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"number : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max = 0;
    int count = 0;

    for(int i = 0 ; i<n ; i++){
        
        if(arr[i] == 1){
            count += 1;
            if(count>max){
                max = count;
            }

        }
        
        else{
            count = 0;
        }

    }

    cout<<"max 1 : "<<max<<endl;


}