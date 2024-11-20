#include<bits/stdc++.h>
using namespace std;

void reverse(int i , int j , string s){
    if(i>j){
        return;
    }
    swap(s[i] , s[j]);
    reverse(i=i+1 , j = j-1 , s);
}

int main(){
    string s = "rajat";
    string dup = s;
    int i = 0;
    int j = 4;
    reverse(i,j,s);
    int result = dup.compare(s);
    if (result == 0) {
    cout << "palindrome" << endl;
    }
    else{
        cout<<"no";
    }
    

    



}