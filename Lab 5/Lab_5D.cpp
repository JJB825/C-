#include <iostream>
using namespace std;
int main() 
{
   long num,a;
   cout<<"Enter a number\n";
   cin>>num;
   a=num;
   long temp=0;
   cout<<"Using While Loop\n";
   while(a!=0)
   {
       temp=(temp*10)+a%10;
       a/=10;
   }
   cout<<"The number in reversed order is "<<temp<<endl;
   cout<<"Using Do While Loop\n";
   a=num;temp=0;
   do
   {
       temp=(temp*10)+a%10;
       a/=10;
   }
   while(a!=0);
   cout<<"The number in reversed order is "<<temp<<endl;
   return 0;
}