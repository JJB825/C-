#include <iostream>
#include<string>
using namespace std;
class student1
{
    private : 
    string name;
    protected : 
    int marks;
    public :
    friend class student2;
};
class student2
{
    private : 
    string name;
    protected : 
    int marks;
    public :
    student2(student1 s1)
    {
        cout<<"Enter student 1 details :\n";
        cout<<"Name : "; cin>>s1.name;
        cout<<"Marks : "; cin>>s1.marks;
        cout<<"Enter student 2 details :\n";
        cout<<"Name : "; cin>>name;
        cout<<"Marks : "; cin>>marks;
        int total = s1.marks + marks;
        cout<<"The total marks obtained by "<<s1.name<<" and "<<name<<" is "<<total<<endl;
    }
};
int main()
{
    student1 s1;
    student2 s2(s1);
    return 0;
}
