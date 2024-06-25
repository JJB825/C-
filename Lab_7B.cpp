#include <iostream>
#include<string>
using namespace std;
struct student
{
    long reg;
    string name;
    int marks[3];
    int tot;
    int avg;
};
int main()
{
    student s;
    cout<<"Enter your details\n";
    cout<<"Enter your name\n";
    getline (cin,s.name);
    cout<<"Enter your Registration number\n";
    cin>>s.reg;
    cout<<"Enter your marks\n";
    int total=0;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter your marks in subject "<<i+1<<":\n";
        cin>>s.marks[i];
        total+=s.marks[i];
    }
    s.tot=total;
    s.avg=total/3;
    cout<<"\n\nStudent Details : \n";
    cout<<"Name : "<<s.name<<endl;
    cout<<"Registration Number : "<<s.reg<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Marks in subject "<<i+1<<": ";
        cout<<s.marks[i]<<endl;
    }
    cout<<"Total Marks : "<<s.tot<<endl;
    cout<<"Average Marks : "<<s.avg<<endl<<endl;
    return 0;
}
