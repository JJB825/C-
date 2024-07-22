#include <iostream>
using namespace std;
void function(float x)
{
    cout<<"The value of x is "<<x<<endl;
}
void function(int y)
{
    cout<<"The value of y is "<<y<<endl;
}
int main()
{
    function(3.4f);
    function(34);
    return 0;
}