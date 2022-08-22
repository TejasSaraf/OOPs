// Friend function in more than one class

#include <iostream>
using namespace std;

class Human;
class Person
{
    int height;

public:
    void setdata(int height)
    {
        this->height = height;
    }
    friend void display(Person, Human);
};

class Human
{
    char level;

public:
    void setdata(char level)
    {
        this->level = level;
    }
    friend void display(Person, Human);
};

void display(Person p1, Human h1)
{
    cout << "Height:" << p1.height << endl;
    cout << "Level:" << h1.level << endl;
}
int main()
{
    Person p;
    p.setdata(10);
    Human h;
    h.setdata('A');

    display(p, h);
    return 0;
}