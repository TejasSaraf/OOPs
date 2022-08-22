#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    int health;
    char level;

public:
    char *name = new char[20];
    Person(int health, char level, char name[])
    {
        this->health = health;
        this->level = level;
        this->name = name;
    }
    // Deep copy
    Person(Person &p)
    {
        char *ch = new char[strlen(p.name) + 1];
        strcpy(ch, p.name);
        this->name = ch;
        this->health = p.health;
        this->level = p.level;
    }
    void print()
    {
        cout << "Name:" << name << " "
             << "Health:" << health << " "
             << "Level" << level << " " << endl;
        cout << endl;
    }
};

int main()
{
    char name[20] = {'N', 'A', 'M', 'E', '\0'};
    Person p(10, 'A', name);
    p.print();

    Person p1(p);
    p1.print();

    p.name[0] = 'G';
    p.print();
    p1.print();

    return 0;
}