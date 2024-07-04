/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int factorial(int n) {
   int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;


    cout << "nCr (" << n << " choose " << r << ") = " << nCr(n, r) << endl;

    return 0;
}


