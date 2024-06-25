#include <iostream>
#include<string>
using namespace std;
int main() 
{
   cout<<"Enter your credentials :\n";
   string name,middle_name,surname;
   cout<<"Enter your full name :\nName : "; cin>>name; 
   cout<<"Middle Name : "; cin>>middle_name; 
   cout<<"Surname : "; cin>>surname;
   string dep;
   cout<<"Which department are you from ?\t(HR,Technical,Finance,Sale)\n";
   cin>>dep;
   long id;
   cout<<"Enter your ID : \n";
   cin>>id;
   cout<<"Enter your salary details :\n";
   double basic,hra,pf,mf,net_sal;
   cout<<"Basic Pay : "; cin>>basic;
   cout<<"HRA : "; cin>>hra;
   cout<<"PF : "; cin>>pf;
   cout<<"Mutual Funds : "; cin>>mf;
   net_sal=basic+hra-pf-mf;
   cout<<"Working Status : (Full_Time OR Half_Time)\n";
   string ws;
   cin>>ws;
   cout<<"\nEmployee's Credentials :\n";
   cout<<"Name : "<<name<<" "<<middle_name<<" "<<surname<<endl;
   cout<<"Department : "<<dep<<endl<<"Employee ID : "<<id<<endl;
   cout<<"Salary = "<<net_sal<<endl<<"Working hours = "<<ws<<endl;
   return 0;
}