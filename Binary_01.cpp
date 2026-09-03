#include<iostream>
using namespace std;

// I will write the code of Decimal to Binary 
int DTB (int decNum){

    int ans = 0, exponential = 1;
    while(  decNum >  0){
        int rem = decNum  % 2 ;
        decNum /= 2;

        ans += (rem * exponential);
         exponential  *= 10;

    }
    return ans;
}

int main(){
    int decNum = 50;
    cout<< DTB(decNum)<<endl;
    

    return 0;
}



   