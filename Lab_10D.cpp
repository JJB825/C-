#include <iostream>
using namespace std;
class student
{
    protected :
    int marks;
    public :
    virtual void display() {}
};
class student1 : public student
{
    public :
    student1(int m)
    {
        marks = m;
    }
    void display()
    {
        cout<<"The marks of student 1 is : "<<marks<<endl;
    }
};
class student2 : public student
{
    public :
    student2(int m)
    {
        marks = m;
    }
    void display()
    {
        cout<<"The marks of student 2 is : "<<marks<<endl;
    }
};
int main()
{
    int marks1,marks2;
    cout<<"Enter marks of student 1 : ";
    cin>>marks1;
    cout<<"Enter marks of student 2 : ";
    cin>>marks2;
    student1 s1(marks1);
    student1 s2(marks2);
    student *s[2];
    s[0] = &s1;
    s[1] = &s2;
    s[0] -> display();
    s[1] -> display();
    return 0;
}