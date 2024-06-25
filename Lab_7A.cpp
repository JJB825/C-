#include <iostream>
#include<string>
using namespace std;
struct employee
{
    string name;
    long id;
    int age;
    long sal;
};
int main()
{
    employee e[5];
    cout<<"Enter your details\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter your name\n";
        getline (cin,e[i].name);
        cout<<"Enter your ID\n";
        cin>>e[i].id;
        cout<<"Enter your age\n";
        cin>>e[i].age;
        cout<<"Enter your salary\n";
        cin>>e[i].sal;
        cout<<"\n\nEmployee "<<i+1<<" Details : \n";
        cout<<"Name : "<<e[i].name<<endl;
        cout<<"ID : "<<e[i].id<<endl;
        cout<<"Age : "<<e[i].age<<endl;
        cout<<"Salary : "<<e[i].sal<<endl<<endl;
    }
    return 0;
}
