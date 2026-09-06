#include<iostream>
using namespace std;

// decimal to binary conversion code 

int BinToDec(int Binum){
int power = 1;
int ans = 0;

while(Binum > 0){
    int rem = Binum % 10;
     ans += rem * power;
     Binum /= 10;
     power *= 2;
}
       return ans;
}


int main(){
    int BiNum = 1010;
    cout<<BinToDec(BiNum)<<endl;

    return 0;
}