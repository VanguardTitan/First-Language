#include <iostream>
using namespace std;

int main (){

// This is the triangle pattern question 
int n = 4;

for (int i = 0; i < n; i++){
    for (int j = 0 ; j < i+1; j++){
        cout<<"*";
    }
    cout<<"\n";
}


// This is the triangle pattern question of numbers 
// int n = 4;


// for (int i = 0; i < n; i++){
//  for (int j = 0; j < i+1 ; j++){
//     cout<<(i+1);
    
//  }
//  cout<<"\n";
// }


// reversed triangle ques starts here:

// int n = 4;
// int m = 1;
// for(int i = 0; i < n; i++){
//     for (int j = 1; j <= i+1 ; j++){
//     cout<< m<<" ";
//     m++;                
//     } cout<<"\n";
// }



    return 0;
}