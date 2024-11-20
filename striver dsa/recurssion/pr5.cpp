#include<bits/stdc++.h>
using namespace std;

void reverse(int i , int j , int arr[]){
    if(i>j){
        return;
    }
    swap(arr[i] , arr[j]);
    reverse(i=i+1 , j = j-1 , arr);
    


}

int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    int j = 4;
    reverse(i,j,arr);
    for(int a = 0 ; a<5 ; a++){
        cout<<arr[a]<<endl;
    }
    

    



}