#include <iostream>
#include<string>
using namespace std;
class engineer
{
    protected : 
    string e_name;
    int e_age;
    public :
    engineer()
    {
        cout<<"Enter Engineer Details : \n";
        cout<<"Enter your name : ";
        cin>>e_name;
        cout<<"Enter your age : ";
        cin>>e_age;
    }
};
class doctor 
{
    protected :
    string d_name;
    int d_age;
    public :
    doctor()
    {
        cout<<"\nEnter Doctor Details : \n";
        cout<<"Enter your name : ";
        cin>>d_name;
        cout<<"Enter your age : ";
        cin>>d_age;
    }
};
class student 
{
    protected :
    string s_name;
    int s_age;
    public :
    student()
    {
        cout<<"\nEnter Student Details : \n";
        cout<<"Enter your name : ";
        cin>>s_name;
        cout<<"Enter your age : ";
        cin>>s_age;
    }
};
class labourer 
{
    protected :
    string l_name;
    int l_age;
    public :
    labourer()
    {
        cout<<"\nEnter Labourer Details : \n";
        cout<<"Enter your name : ";
        cin>>l_name;
        cout<<"Enter your age : ";
        cin>>l_age;
    }
};
class database : public engineer, public doctor, public student, public labourer
{
    public :
    database()
    {
        cout<<"\nEngineer Database : \n";
        cout<<"Name : "<<e_name<<"\n";
        cout<<"Age : "<<e_age<<"\n";
        cout<<"\nDoctor Database : \n";
        cout<<"Name : "<<d_name<<"\n";
        cout<<"Age : "<<d_age<<"\n";
        cout<<"\nStudent Database : \n";
        cout<<"Name : "<<s_name<<"\n";
        cout<<"Age : "<<s_age<<"\n";
        cout<<"\nLabourer Database : \n";
        cout<<"Name : "<<l_name<<"\n";
        cout<<"Age : "<<l_age<<"\n";
    }
};
int main()
{
    database d;
    return 0;
}