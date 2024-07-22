#include<iostream>
#include<string>
using namespace std;
class student
{
  public:
  string name,dep;
  long id;
  float cgpi;
  void getdata(string n,string d,long i,float c)
  {
      name=n;
      dep=d;
      id=i;
      cgpi=c;
  }
  void printdata()
  {
      cout<<"Name : "<<name<<endl<<"Department : "<<dep<<endl<<"ID : "<<id<<endl<<"CGPI : "<<cgpi;
  }
};
int main()
{
    string n,d;
    long i;
    float c;
    cout<<"Enter your Credentials\nName (Use _ instead of space) : "; cin>>n;
    cout<<"Department (Use _ instead of space) : "; cin>>d;
    cout<<"ID : "; cin>>i;
    cout<<"CGPI : "; cin>>c;
    student s;
    s.getdata(n,d,i,c);
    s.printdata();
    return 0;
}