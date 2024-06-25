#include<iostream>
using namespace std;
int main()
{
    int marks[5],total=0;
    float per;
    char grade;
    for(int a=0;a<5;a++)
    {
        cout<<"Enter marks in subject "<<a+1<<" = ";
        cin>>marks[a];
        total+=marks[a];
        cout<<endl;
    }
    cout<<"\nYour total marks is "<<total<<endl;
    per=(total*100*1.0)/500;
    cout<<"Your percentage is "<<per<<"%"<<endl;
    if(per>59.00)
    {
        if(per>89.00)
        {
            grade='A';
            cout<<"Your Grade is "<<grade<<endl;
        }
        else if(per>79.00)
        {
            grade=='B';
            cout<<"Your Grade is "<<grade<<endl;
        }
        else
        {
            grade='C';
            cout<<"Your Grade is "<<grade<<endl;
        }
    }
    else
    {
        if(per>=35.00)
        {
            grade='D';
            cout<<"Your Grade is "<<grade<<endl;
        }
        else
        {
           grade='F';
           cout<<"Oops!You have failed\n"<<grade<<endl; 
        }
    }
    return 0;
 }