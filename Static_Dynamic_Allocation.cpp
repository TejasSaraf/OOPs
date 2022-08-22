#include <iostream>
using namespace std;

class Person
{
public:
    int health;
    char level;

    void sethealth(int h)
    {
        health = h;
    }
    int gethealth()
    {
        return health;
    }
    void setlevel(char c)
    {
        level = c;
    }
    char getlevel()
    {
        return level;
    }
};

int main()
{
    // static allocation
    Person p;
    p.sethealth(10);
    cout << "Helath: " << p.gethealth() << endl;

    // dynamic allocation
    Person *p1 = new Person;
    (*p1).setlevel('A');
    cout << "Level: " << (*p1).getlevel() << endl;

    Person *p2 = new Person;
    p2->setlevel('B');
    cout << "Level: " << p2->getlevel() << endl;

    return 0;
}