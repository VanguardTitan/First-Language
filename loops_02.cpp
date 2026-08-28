#include<iostream>
using namespace std;

int main(){
    
// I am starting the Prime no. ques here

int n ; 

cout<<" ENTER YOUR NUMBER HERE : ";
cin>> n ;

bool isprime = true;

for(int i = 2; i<= n-1; i++){
  if(n % i == 0){
    isprime = false;
    break;
  }
}
  if(isprime ==  true){
  cout<<"Your Number is prime";

  }else{
    cout<<"Your number is not prime";
  }


    return 0;
  }