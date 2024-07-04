/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
    
}
int main(){
    int num1,num2;
    cout<<"enter 1st num"<<endl;
    cin>>num1;
    cout<<"enter 2nd num "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2)<<endl;
}