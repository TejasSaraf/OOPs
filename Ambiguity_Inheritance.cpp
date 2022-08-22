#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Inside Function 1" << endl;
    }
};
class B
{
public:
    void fun()
    {
        cout << "Inside Function 2" << endl;
    }
};
class C : public A, public B
{
public:
    void fun2()
    {
        cout << "Inside Function 3" << endl;
    }
};
int main()
{
    C obj;
    obj.A::fun();
    obj.B::fun();
    obj.fun2();
    return 0;
}