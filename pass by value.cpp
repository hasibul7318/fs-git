/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
void dummy (int n){
    n++;
    cout<<"n is "<< n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy (n);
    cout<<"number n is "<< n <<endl;
    return 0;
    
}

