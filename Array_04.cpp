#include<iostream>
using namespace std;

int twoSum(int arr[],int size, int target){
    int i,j;
    for(int i = 0; i < size; i++){
        for(int j = i+1 ; j < size; j++){
        if(arr[i] + arr[j] == target){
            cout<<"Indices Found:"<<i<<"and"<<j<<endl;
                 return (i,j);
                }
         }
    }
   
 return -1;   
}

int main(){
    int arr[] = {7,5,2,8,9};
    int size = 5;
    int target = 10;
    int i,j;

   int result = twoSum(arr, size, target);
    
    cout<<result<<endl;


    return 0;
}