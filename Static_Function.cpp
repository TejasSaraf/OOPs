#include <iostream>
using namespace std;

class Person
{
    int health;

public:
    static char level;
    Person(int health)
    {
        this->health = health;
    }
    void display()
    {
        cout << "Health:" << health << endl;
    }
    static void display1();
};
char Person::level = 'A';

void Person::display1()
{
    cout << "Level:" << level << endl;
}
int main()
{
    Person p(10);
    p.display();
    Person::display1();
    return 0;
}