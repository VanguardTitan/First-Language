#include<iostream>
using namespace std;

int main(){

// This code will print the sum of first n natural numbers

int sum = 0;
int n;
cout<<"Enter your number here : ";
cin>> n;

for(int i = 1; i<= n; i++){
    sum = sum + i;
}
cout<<"The sum of first "<<n<<" natural numbers is : "<<sum;
return 0;
}