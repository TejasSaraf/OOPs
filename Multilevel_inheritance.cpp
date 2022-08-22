#include <iostream>
#include <string.h>
using namespace std;

class Vehical
{
public:
    int modelNo = 300;
};

class Car : public Vehical
{
public:
    string name = "BMW";
};

class BMW : public Car
{
public:
    void display()
    {
        cout << "Car Name:" << name << endl;
        cout << "Model No:" << modelNo << endl;
    }
};
int main()
{
    BMW b;
    b.display();
    return 0;
}