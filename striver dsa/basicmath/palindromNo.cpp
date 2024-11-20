#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int duplicate = n;
    int revNo = 0;
	while(duplicate>0){
		int lastdig = duplicate%10;
		duplicate/=10;
		revNo = (revNo*10)+lastdig;
	}
	if(revNo == n){
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"not palindrome"<<endl;

    } 
}