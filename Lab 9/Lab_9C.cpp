#include <iostream>
using namespace std;
class rectangle 
{
    double length,breadth;
    public : 
    rectangle(double a,double b)
    {
        length = a;
        breadth = b;
    }
    double area(void)
    {
        return length*breadth;
    }
};
int main()
{
    double l,b;
    cout<<"Enter length and breadth of rectangle : ";
    cin>>l>>b;
    rectangle r(l,b);
    cout<<"The area of rectangle is = "<<r.area()<<endl;
    return 0;
}