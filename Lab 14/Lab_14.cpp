#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name,taluka,district,state;
    long mobile_no,pincode;
    cout<<"Enter your details.\n";
    cout<<"Enter your name : ";
    getline(cin, name);
    cout<<"Enter your mobile number : ";
    cin>>mobile_no;
    cout<<"Enter taluka : ";
    cin>>taluka;
    cout<<"Enter district : ";
    cin>>district;
    cout<<"Enter state : ";
    cin>>state;
    cout<<"Enter pincode : ";
    cin>>pincode;
    ofstream o;
    o.open("database.txt");
    if(!o)
    {
        cout<<"Error obtained in creating text file.\n";
        return 1;
    }
    o<<"Person Details : \n"<<"Name : "<<name<<endl;
    o<<"Mobile Number : "<<mobile_no<<endl;
    o<<"Taluka : "<<taluka<<endl;
    o<<"District : "<<district<<endl;
    o<<"State : "<<state<<endl;
    o<<"Pincode : "<<pincode<<endl;
    o.close();
    ifstream i;
    i.open("database.txt");
    if(!i)
    {
        cout<<"Error obtained in opening text file.\n";
        return 1;
    }
    cout<<"\nDisplaying details from file : \n";
    string print;
    while(i.eof() == 0)
    {
        getline(i, print);
        cout<<print<<endl;
    }
    i.close();
    return 0;
}