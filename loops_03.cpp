#include<iostream>
using namespace std;

int main(){


// I will write the code of Fibonacci Series 

// int n ;
// cout<<"Enter your no here: ";
// cin>> n;
// int a = 0 , b = 1;

// cout<<"Fibonacchi Series:"<<a<<","<<b;

//  for(int i = 2; i < n ; i++){
//     int j = (a+b);
//     cout<<","<<j;
//     a=b;
//     b=j;
//     }
    


// All Prime no. from 2 to n


    int n;
    cout << "Enter your No. here: ";
    cin >> n;

    // Handle inputs less than 2 directly
    if (n < 2) {
        cout << "There are no prime numbers in the range 1 to " << n << endl;
        return 0;
    }

    cout << "Prime numbers from 1 to " << n << " are: ";

    // Start checking from 2 since 1 is not a prime number
    for (int i = 2; i <= n; i++) {
        bool isprime = true;

        for (int a = 2; a * a <= i; a++) {
            if (i % a == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime) {
            cout << i << " ";
        }
    }

    cout << endl;


    return 0;
}