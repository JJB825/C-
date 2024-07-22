#include <iostream>
using namespace std;
class overload
{
    private:
    int test1,test2;
    public:
    void getvalue()
    {
        cout<<"Enter two values\n";
        cin>>test1>>test2;
    }
    int operator !()
    {
        cout<<"The values of operation are : "<<!(test1)<<"\t"<<!(test2)<<endl;
        return 0;
    }
};
int main()
{
    overload o;
    o.getvalue();
    !o;
    return 0;
}
