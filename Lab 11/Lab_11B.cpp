#include <iostream>
using namespace std;
class distance2;
class distance1
{
    private : 
    float d;
    protected : 
    float t;
    public :
    distance1()
    {
        cout<<"Enter the distance travelled by car 1 : ";
        cin>>d;
        cout<<"Enter the time required by car 1 to cover that distance : ";
        cin>>t;
    }
    friend float maxspeed(distance1 d1,distance2 d2);
};
class distance2
{
    private : 
    float d;
    protected : 
    float t;
    public :
    distance2()
    {
        cout<<"Enter the distance travelled by car 2 : ";
        cin>>d;
        cout<<"Enter the time required by car 2 to cover that distance : ";
        cin>>t;
    }
    friend float maxspeed(distance1 d1,distance2 d2);
};
float maxspeed(distance1 d1,distance2 d2)
{
    float s1 = d1.d/d1.t;
    float s2 = d2.d/d2.t;
    return (s1 > s2) ? s1 : s2;
}
int main()
{
    distance1 d1;
    distance2 d2;
    cout<<"The greater speed of either of the two cars is : "<<maxspeed(d1,d2)<<endl;
    return 0;
}