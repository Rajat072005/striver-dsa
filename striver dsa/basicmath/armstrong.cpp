#include <iostream>
using namespace std;


int cube(int n){
    return n*n*n;

}

int main(){
    int n ; 
    cin>>n;
    int dup = n;
    int sum=0;

    while(n>0){
        int digit = n%10;
        n/=10;
        sum+=cube(digit);
    }

    if(dup==sum){
        cout<<"armstrong";
    }
    else cout<<"not";
}