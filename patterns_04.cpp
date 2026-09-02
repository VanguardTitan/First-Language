#include<iostream>
using namespace std;

int main(){
// Hollow Diamond pattern
// top 
    // int n = 10;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n-i-1; j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if (i != 0){
    //       for(int j = 0; j < 2*i-1; j++){
    //         cout<<" ";
    //       }  
    //       cout<<"*";
    //     }
    //     cout<<"\n";
    // }
 
    // // // back
    // for( int i = 0; i < n-1; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";

    //     if( i != n-2 ){
    //     for(int j = 0; j < 2*(n-i)-5; j++){
    //     cout<<" ";
    // }
    //     cout<<"*";
    // }
    // cout<<"\n";
    // }


    // i will start butterfly ques here
// top
    int n = 4;
     for (int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        
     for( int j = 0; j < 2*(n-i-1); j++){
        cout<<" ";
     }    
        
     for ( int j = 0; j < i+1; j++){
        cout<<"*";
     }       
        cout<<"\n";
     }


    // back

    for(int i = n-1; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<<"*";
        }
        for(int j = 0; j <= 2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int j = 0; j < i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}