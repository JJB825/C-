#include <iostream>
using namespace std;
int main() 
{
   char ch;
   cout<<"Enter any alphabet\n";
   cin>>ch;
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
   {
       cout<<"The alphabet is a vowel\n";
   }
   else if(ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U')
   {
       cout<<"The alphabet is a vowel\n";
   }
   else
   {
       cout<<"The alphabet is not a vowel\n";
   }
   return 0;
}