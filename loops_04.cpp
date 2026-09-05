#include<iostream>
using namespace std;;
// This code checks if your no. is a power of 2 or not 
int main(){
int n; 

cout<<"Enter your number here : ";
cin>>n;
         
if( n <= 0 ){
  cout<<"your no. is not a power of two";
}


    while( n % 2 == 0 ){
      
      n /= 2;
      
    }
     

    if ( n == 1 ){
      cout<<"your no. is power of 2";
    }else{
      cout<<"your no. is not a power of 2";
    }


    return 0;
}