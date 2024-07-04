/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a value of a"<<endl;
    cin>>a;
    cout<<"enter a value of b"<<endl;
    cin>>b;
    char operater;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>operater;
    switch(operater){
        case '+' :cout<<(a+b)<<endl;
               break;
        case '-' :cout<<(a-b)<<endl;
                break;
        case '*' : cout<<(a*b)<<endl;
                 break;
        case '/' : cout<<(a/b)<<endl;
                  break;
        case '%' : cout<<(a%b)<<endl;
                break;
        default:
        cout<<"please enter a valid operation"<<endl;
    }

    return 0;
}