#include <iostream>
using namespace std;
int main() 
{
   int terms;
   cout<<"Enter number of terms in fibonacci series\n";
   cin>>terms;
   int a=0,b=1;
   cout<<"The required fibonacci series is :\n";
   cout<<a<<endl<<b<<endl;
   for(int i=2;i<terms;i++)
   {
       int c=a+b;
       a=b;
       b=c;
       cout<<c<<endl;
   }
   return 0;
}