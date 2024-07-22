#include <iostream>
#include<string>
using namespace std;
struct address
{
   int houseno;
   string city;
   long pincode;
};
struct employee
{
   string name;
   long id;
   address a;
};
int main()
{
    employee e;
    cout<<"Enter your details\n";
    cout<<"Enter your name\n";
    cin>>e.name;
    cout<<"Enter your ID\n";
    cin>>e.id;
    cout<<"Enter your Address Details\n";
    cout<<"Enter your House Number\n";
    cin>>e.a.houseno;
    cout<<"Enter your City\n";
    cin>>e.a.city;
    cout<<"Enter your pincode\n";
    cin>>e.a.pincode;
    cout<<"\n\nEmployee Details : \n";
    cout<<"Name : "<<e.name<<endl;
    cout<<"ID : "<<e.id<<endl;
    cout<<"Address Details : "<<endl;
    cout<<"House Number : "<<e.a.houseno<<endl;
    cout<<"City : "<<e.a.city<<endl;
    cout<<"Pincode : "<<e.a.pincode<<endl;
    return 0;
}
