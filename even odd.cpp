/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

// Function to check if a number is even or odd
string checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    // Call the function and display the result
    cout << "The number " << num << " is " << checkEvenOrOdd(num) << "." << endl;
    
    return 0;
}


