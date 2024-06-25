#include <iostream>
using namespace std;
class overload
{
    public:
    int side;
    int volume()
    {
        return side*side*side;
    }
    bool operator >(overload o)
    {
        if(volume()>o.volume())
        return true;
        else
        return false;
    }
    bool operator <(overload o)
    {
        if(volume()<o.volume())
        return true;
        else
        return false;
    }
};
int main()
{
    overload o1,o2;
    o1.side=3;
    o2.side=4;
    if(o1.volume()>o2.volume())
    {
        cout<<"Volume of first cube is greater than second\n";
    }
    else
    {
        cout<<"Volume of first cube is lesser than second\n";
    }
    return 0;
}