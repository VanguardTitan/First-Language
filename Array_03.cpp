#include<iostream>
using namespace std;

//Code calculate sum and product of all numbers in an Array 

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size = 7;
    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout<<"Your Sum is:"<<sum<<endl;
    cout<<"Your Product is:"<<product<<endl;

    return 0;
}

