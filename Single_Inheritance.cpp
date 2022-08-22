#include <iostream>
#include <string.h>
using namespace std;

class Vehical
{
public:
    string name, color;
    int modelNo;

public:
    void getdata(string name, string color, int modelNo)
    {
        this->name = name;
        this->color = color;
        this->modelNo = modelNo;
    }
    void display()
    {
        cout << "Car Name:" << name << endl;
        cout << "Color:" << color << endl;
        cout << "Model No:" << modelNo << endl;
    }
};

class Car : public Vehical  //single inheritance
{
};
int main()
{

    Car c;
    c.getdata("BMW", "Red", 300);
    c.display();
    return 0;
}