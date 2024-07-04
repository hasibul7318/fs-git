/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int prod=1;
   int sum=0;
   while(n!=0){
       int digit =  n%10;
       prod=prod*digit;
       sum=sum+digit;
       n=n/10;
   }
   int answer=prod-sum;
   return answer;
}