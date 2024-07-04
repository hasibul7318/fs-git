/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

void printcounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printcounting(n);
    return 0;
}



