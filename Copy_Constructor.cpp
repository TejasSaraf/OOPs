#include <iostream>
using namespace std;

class Person
{
    int health;
    char level;

public:
    Person(int health, int level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    Person(Person &p)
    {
        cout << "Copy constructor called!" << endl;
        this->health = p.health;
        this->level = p.level;
    }
    void display()
    {
        cout << "Health:" << this->health << endl;
        cout << "Level:" << this->level << endl;
    }
};
int main()
{
    Person p(10, 'A');
    p.display();

    // copy constructor
    Person p1(p);
    p1.display();

    return 0;
}