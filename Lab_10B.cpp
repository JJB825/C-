#include <iostream>
#include<string>
using namespace std;
class employee 
{
    public :
    string name;
    long id;
    string des;
    float hra;
    float pf;
    float basic_pay;
    float da;
    employee()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your ID : ";
        cin>>id;
        cout<<"Enter your designation : ";
        cin>>des;
        cout<<"Enter your HRA : ";
        cin>>hra;
        cout<<"Enter your PF : ";
        cin>>pf;
        cout<<"Enter your Basic Pay : ";
        cin>>basic_pay;
        cout<<"Enter your DA : ";
        cin>>da;
    }
};
class salary : public employee 
{
    float net_pay;
    public :
    salary()
    {
        net_pay = basic_pay + hra + da - pf;
    }
    void printdata()
    {
        cout<<"Name : "<<name<<"\n"<<"ID : "<<id<<"\n"<<"Designation : "<<des<<"\n";
        cout<<"Your Net Pay is = "<<net_pay<<endl;
    }
};
int main()
{
    salary s;
    s.printdata();
    return 0;
}