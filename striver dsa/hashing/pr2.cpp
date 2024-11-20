#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int size = s.size();
    

    int hasharr[26] = {0};
    for(int i = 0 ; i<size ; i++){
        int num = s[i];
        hasharr[num - 'a']++;
    }

    char x;
    cout<<"enter character : ";
    cin>>x;
    
    cout<<hasharr[x - 'a'];
}