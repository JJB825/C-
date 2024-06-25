#include <iostream>
using namespace std;
int main() 
{
   int num,a=1;
   long fact=1;
   cout<<"Enter a number\n";
   cin>>num;
   cout<<"Using While Loop\n";
   while(a<=num)
   {
       fact*=a;
       a++;
   }
   cout<<"The factorial of the number is "<<fact<<endl;
   cout<<"Using Do While Loop\n";
   a=1;fact=1;
   do
   {
       a++;
       fact*=a;
   }
   while(a<num);
   cout<<"The factorial of the number is "<<fact<<endl;
   return 0;
}