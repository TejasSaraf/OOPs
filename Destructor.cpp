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
    void display()
    {
        cout << "Health:" << health << endl;
        cout << "Level:" << level << endl;
    }
    ~Person()
    {
        cout << "Destructor Bhai Called!" << endl;
    }
};
int main()
{
    Person p(10, 'A');
    p.display();
    return 0;
}