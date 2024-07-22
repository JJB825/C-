#include <iostream>
using namespace std;
class overload
{
    private :
    int a;
    public :
    void input()
    {
        cout<<"Enter a value\n";
        cin>>a;
    }
    int operator --();
    void output()
    {
        cout<<"The value of a after using operator is "<<a<<endl;
    }
};
int overload :: operator --()
{
    return (--a);

}
int main()
{
    overload o;
    o.input();
    --o;
    o.output();
    return 0;
}