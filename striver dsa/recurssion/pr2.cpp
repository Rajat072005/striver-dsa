#include<bits/stdc++.h>
using namespace std;

void print(int i , int n){
    if(i<1){
        return ;
    }

    cout<<i<<" ";
    print(i=i-1,n);

}
int main(){
    int n;
    cin>>n;
    print(n,n);
}