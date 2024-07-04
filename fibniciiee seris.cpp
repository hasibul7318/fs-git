/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int nextnumber =a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}