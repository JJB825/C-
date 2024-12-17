#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    // since virtual is written here, this function is overriden in the derived class
    virtual void display()
    {
        cout << "This is base class's display function\n";
    }
    void print()
    {
        cout << "This is base class's print function\n";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "This is derived class's display function\n";
    }
    void print()
    {
        cout << "This is derived class's print function\n";
    }
};
int main()
{
    base *baseptr;
    derived d;
    // here we can assign address of derived class to pointer of type base class because of inheritance only
    baseptr = &d;
    // because virtual is written, the baseptr points to derived class object and therefore calls the display function of derived class
    // if the virtual keyword wouldn't have been written, it would have carried out functionality of base class only
    baseptr->display();
    baseptr->print();
    return 0;
}