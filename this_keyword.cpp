#include <iostream>
using namespace std;

class Person
{
    int health;
    char level;

public:
    Person(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void display()
    {
        cout << "Health:" << health << endl;
        cout << "Level:" << level << endl;
    }
};
int main()
{
    Person p(10, 'A'), p1(11, 'B');
    p.display();
    p1.display();

    return 0;
}