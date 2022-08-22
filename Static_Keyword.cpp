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
};
char Person::level = 'A';
int main()
{
    Person p(10);
    p.display();
    cout << "Level:" << Person::level << endl;
    return 0;
}