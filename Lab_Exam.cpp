#include <iostream>
using namespace std;
class operate 
{
    int x,y;
    public :
    void read()
    {
        cout<<"Enter two numbers : ";
        cin>>x>>y;
    }
    int sum()
    {
        return x+y;
    }
    int mul()
    {
        return x*y;
    }
    void print()
    {
        cout<<"The addition of two numbers entered is : "<<sum()<<endl;
        cout<<"The multiplication of two numbers entered is : "<<mul()<<endl;
    }
};
int main()
{
    operate o;
    o.read();
    o.print();
    return 0;
}