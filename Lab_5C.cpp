#include <iostream>
using namespace std;
int main() 
{
   cout<<"Using While Loop\n";
   int a=1;
   while(a<11)
   {
       cout<<a<<endl;
       a++;
   }
   a=0;
   cout<<"Using Do While Loop\n";
   do
   {
       a++;
       cout<<a<<endl;
   }
   while(a<10);
   return 0;
}