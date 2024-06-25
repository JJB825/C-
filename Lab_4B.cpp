#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char sign;
    cout<<"Enter any two numbers\n";
    cin>>x>>y;
    cout<<"Enter operator sign (+,-,*,/) : ";
    cin>>sign;
    switch(sign)
    {
        case '+':
          cout<<x<<sign<<y<<"="<<x+y<<endl;
          break;
        case '-':
          cout<<x<<sign<<y<<"="<<x-y<<endl; 
          break;
        case '*':
          cout<<x<<sign<<y<<"="<<x*y<<endl;
          break;
        case '/':
           if(y == 0)
           {
              cout<<"Expression invalid\n";
           }
           else 
           {
              cout<<x<<sign<<y<<"="<<x/y<<endl;
           }
           break;
        default :
           cout<<"Expression invalid\n";
           break;
    }
    return 0;
}
