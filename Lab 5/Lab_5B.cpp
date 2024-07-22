#include <iostream>
using namespace std;
int main() 
{
   float a,b,c;
   cout<<"Enter three numbers\n";
   cin>>a>>b>>c;
   if(a>b)
   {
       if(a>c)
       {
           cout<<"The largest of three numbers is "<<a<<endl;
       }
       else
       {
           cout<<"The largest of three numbers is "<<c<<endl;
       }
   }
   else
   {
       if(b>c)
       {
           cout<<"The largest of three numbers is "<<b<<endl;
       }
       else
       {
           cout<<"The largest of three numbers is "<<c<<endl;
       }
   }
   return 0;
}