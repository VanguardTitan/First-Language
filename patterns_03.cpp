#include<iostream>
using namespace std;

 

int main (){

// This code prints revered numbers

// int n = 4;
// for (int i = 0; i < n; i++){
//     for (int j = 0; j < i; j++){
//         cout << " ";
//     }
// for( int j = 0; j < n-i; j++){
//     cout<<(i+1);
// }
// cout<<"\n";
// }



// This code prints revered alphabets
    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i; j++){
    //         cout<<" ";
    //     }
    //     for (int j = 0; j < n-i; j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<"\n";

   
    // This code prints pyramidal number pattern
    
    int n = 9;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
        cout<<" ";
    }
    for(int j = 1; j <= i+1; j++){
        cout<<j;
    }
    for (int j = i; j >= 1; j--){
        cout<< j;
    }
    cout<<"\n";
}
    return 0;
 }