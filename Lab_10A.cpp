#include <iostream>
using namespace std;
class input
{
    protected :
    int a,b;
    public :
    input()
    {
        cout<<"Enter two numbers : ";
        cin>>a>>b;
    }
};
class operate : public input
{
    protected : 
    int c,d,e;
    float f;
    public :
    operate()
    {
        c = a + b;
        d = a - b;
        e = a * b;
        f = (float)a / b;
    }
};
class output : public operate
{
    public : 
    output()
    {
        cout<<"\nAfter performing addition, the result is = "<<c<<endl;
        cout<<"After performing subtraction, the result is = "<<d<<endl;
        cout<<"After performing multiplication, the result is = "<<e<<endl;
        cout<<"After performing division, the result is = "<<f<<endl;
    }
};
int main()
{
    output o;
    return 0;
}