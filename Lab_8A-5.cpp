#include <iostream>
using namespace std;
class overlode 
{
    public :
    void main(void)
    {
        cout<<"This is calling of main function\n";
    }
    void main(int x)
    {
        cout<<"This is calling of other main function\n";
    }
};
int main()
{
    overlode o;
    o.main();
    o.main(4);
    return 0;
}