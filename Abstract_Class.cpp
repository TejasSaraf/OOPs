#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun() = 0;
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "Virtual function in derived class." << endl;
    }
};
int main()
{
    Base *p;
    Derived d1;
    p = &d1;
    p->fun();
    return 0;
}