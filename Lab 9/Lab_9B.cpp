#include <iostream>
using namespace std;
class constructor
{
    int a,b,j;
    float d;
    public :
    constructor();
    constructor(int e,int f);
    constructor(constructor &c);
};
constructor :: constructor()
{
    cout<<"Enter two numbers : ";
}
constructor :: constructor(int e,int f)
{
    a=e+f;
    b=e-f;
    j=e*f;
    d=((float)e/f);
    cout<<"Addition : "<<a<<endl;
    cout<<"Subtraction : "<<b<<endl;
    cout<<"Multiplication : "<<j<<endl;
    cout<<"Division : "<<d<<endl;
}
constructor :: constructor(constructor &c)
{
    a=c.a;
    b=c.b;
    j=c.j;
    d=c.d;
    cout<<"\nAddition : "<<c.a<<endl;
    cout<<"Subtraction : "<<c.b<<endl;
    cout<<"Multiplication : "<<c.j<<endl;
    cout<<"Division : "<<c.d<<endl;
}
int main()
{
    int w,x;
    constructor c1;
    cin>>w>>x;
    constructor c2(w,x);
    constructor c3=c2;
    return 0;
}
