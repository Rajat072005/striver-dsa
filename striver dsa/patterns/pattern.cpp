#include <iostream>
using namespace std;

void print1(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i = 1; i<=n ; i++){
        for(int space1 = n-i ; space1>=0 ; space1--){
            cout<<" ";
        }
        for(int j = 1 ; j<= 2*i -1 ; j++){
            cout<<"*";
        }
        for(int space2 = n-1 ; space2>=0 ; space2--){
            cout<<" ";
        }
        cout<<endl;

    }

}
void print3(int n){
    for(int i = 1 ; i<= n ; i++){
        for(int j = 0 ; j<i-1 ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j< 2*n -(2*i -1)  ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j<i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;

    }

}
void print4(int n){

    for(int i = 1; i<=n ; i++){
        for(int space1 = n-i ; space1>=0 ; space1--){
            cout<<" ";
        }
        for(int j = 1 ; j<= 2*i -1 ; j++){
            cout<<"*";
        }
        for(int space2 = n-1 ; space2>=0 ; space2--){
            cout<<" ";
        }
        cout<<endl;

    }


    for(int a = 1 ; a<= n ; a++){
        for(int j = 0 ; j<=a-1 ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j< 2*n -(2*a -1)  ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j<a-1 ; j++){
            cout<<" ";
        }
        cout<<endl;

    }

}
void print5(int n){

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n - i +1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print7(int n){
    int start = 1;
    for(int i = 0 ; i<n ; i++){
        if(i%2 == 0) start = 1;
        else start = 0;

        for(int j = 0 ; j<=i ; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void print8(int n){

    for(int i = 1 ; i <=n ; i++){
        int col = i;
        for(int j = 1 ; j<=i ; j++){
            cout<<j;
        }

        for(int j =0 ; j<2*n -(2*i );j++){
            cout<<" ";
        }

        for(int j = 1 ; j<=i ; j++){
            cout<<col;
            col--;
        }
        cout<<endl;
    }
}
void print9(int n){
    int num = 1;
    for(int i = 1 ; i<=n ; i++){
        
        for(int j = 0 ; j<i ;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void print10(int n){
    
    for(int i = 1 ; i<=n ; i++){
        char ch = 'A';
        
        for(int j = 0 ; j<i ;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void print11(int n){
    
    for(int i = 1 ; i<=n ; i++){
        char ch = 'A';
        
        for(int j = 0 ; j<n-i+1 ;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void print12(int n){
    char ch = 'A';
    for(int i = 1 ; i<=n ; i++){
        
        for(int j = 0 ; j<i ;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}
void print13(int n){
    
    for(int i = 1 ; i<=n ; i++){
        char ch = 'A' + n - i;
        for(int j = 0 ; j<i ;j++){
            cout<<ch<<" ";
            ch++;
            
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n-i;j++){
            cout<<"*";
        }
        for(int j = 0 ; j<2*i ; j++){
            cout<<" ";
        }
        for(int j = 0 ; j<n-i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i;j++){
            cout<<"*";
        }
        for(int j = 0 ; j<2*n -(2*i) ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        

    }
}
void print15(int n){
    for(int i = 0 ; i<=n ; i++){
        for(int j = 1 ; j<=i;j++){
            cout<<"*";
        }
        for(int j = 0 ; j<2*n -(2*i) ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void print16(int n){
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    print16(4);


}