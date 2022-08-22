#include <iostream>
using namespace std;

class Person
{
private:
    int health;

public:
    char level;

    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
    char getlevel()
    {
        return level;
    }
    void setlevel(char c)
    {
        level = c;
    }
};

int main()
{
    Person p;
    p.sethealth(10);
    cout << "Health: " << p.gethealth() << endl;

    p.setlevel('A');
    cout << "Level :" << p.getlevel() << endl;
    return 0;
}