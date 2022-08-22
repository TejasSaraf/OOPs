#include <iostream>
using namespace std;

class Person
{
    int height;
    char level;

public:
    void setdata(int height, char level)
    {
        this->height = height;
        this->level = level;
    }
    friend void display(Person);
};

void display(Person p)
{

    cout << "Height:" << p.height << endl;
    cout << "Level:" << p.level << endl;
}
int main()
{
    Person p;
    p.setdata(10, 'A');
    display(p);
    return 0;
}