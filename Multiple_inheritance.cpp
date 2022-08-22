#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void display2()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void display3()
    {
        cout << "Class C" << endl;
    }
};
int main()
{
    C obj;
    obj.display1();
    obj.display2();
    obj.display3();
    return 0;
}