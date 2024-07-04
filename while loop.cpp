/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i=2;
 
   
   while(i<=n){
      if(n%i==0){
          cout<<"not prime"<<i<<endl;
      }
      
   
   else{
       cout<<"it's prime"<<i<<endl;
   }
 i=i+1;
}
}