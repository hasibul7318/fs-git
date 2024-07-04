/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i*i<=n;i++ ){
        if(n%i==0){
            return 0;
            
        }
    }
    return 1;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Call the isPrime function and display the result
    if (isprime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

