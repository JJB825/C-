#include <iostream>
using namespace std;
int operate(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<(float)(a/b)<<endl;
    return 0;
}
float operate(float a,float b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    return 0.0;
}
double operate(double a,double b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    return 0.00;
}
int main()
{
    cout<<"Passing two integers : \n"<<operate(76,34)<<endl;
    cout<<"Passing two floating values : \n"<<operate(3.7,2.45)<<endl;
    cout<<"Passing two double values : \n"<<operate(8.95,6.87)<<endl;
    return 0;
}