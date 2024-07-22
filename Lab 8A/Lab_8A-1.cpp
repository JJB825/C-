#include <iostream>
using namespace std;
int volume(int s)
{
    return s*s*s;
}
double volume(int r,int h)
{
    return 3.142 * r * r * h;
}
long volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout<<"The volume of cube of side 5 cm is "<<volume(5)<<endl;
    cout<<"The volume of cylinder of radius 7 cm and height 4 cm is "<<volume(7,4)<<endl;
    cout<<"The volume of cuboid of length 15 cm, breadth 10 cm and height 5 cm is "<<volume(15,10,5)<<endl;
    return 0;
}