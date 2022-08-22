#include <iostream>
using namespace std;

class Person
{
    int health;
    char level;
    char *name = new char[20];

public:
    Person(int health, char level, char name[])
    {
        this->health = health;
        this->level = level;
        this->name = name;
    }
    void display()
    {
        cout << "Health:" << health << " "
             << "Level:" << level << " "
             << "Name:" << name << endl;
    }
};
int main()
{
    char name[20] = {'N', 'A', 'M', 'E', '\0'};
    Person p(10, 'A', name);
    p.display();
    Person p1(11, 'B', name);
    p1.display();

    p = p1; // copy_assignment_operator
    cout << endl;
    p.display();
    p1.display();
    return 0;
}