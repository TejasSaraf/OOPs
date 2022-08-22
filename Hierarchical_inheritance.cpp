#include <iostream>
#include <string.h>
using namespace std;

class Vehical
{
public:
    string name;
    int modelNo;
};

class BMW : public Vehical
{
public:
    void getdata(string name, int modelNo)
    {
        this->name = name;
        this->modelNo = modelNo;
    }
    void display()
    {
        cout << name << endl;
        cout << modelNo << endl;
    }
};

class Mercedes : public Vehical
{
public:
    void getdata1(string name, int modelNo)
    {
        this->name = name;
        this->modelNo = modelNo;
    }
    void display1()
    {
        cout << name << endl;
        cout << modelNo << endl;
    }
};

class Ford : public Vehical
{
public:
    void getdata2(string name, int modelNo)
    {
        this->name = name;
        this->modelNo = modelNo;
    }
    void display2()
    {
        cout << name << endl;
        cout << modelNo << endl;
    }
};

int main()
{
    BMW b;
    b.getdata("BMW", 5);
    b.display();

    Mercedes m;
    m.getdata1("Mercedes", 300);
    m.display1();

    Ford f;
    f.getdata2("Ford", 180);
    f.display2();

    return 0;
}