#include <iostream>
using namespace std;

class Person
{
    int health;
    char level;

public:
    Person(int h, char l)
    {
        health = h;
        level = l;
    }
    void display()
    {
        cout << "Health:" << health << endl;
        cout << "Level:" << level << endl;
    }
};
int main()
{
    Person p(10, 'A');
    p.display();
    return 0;
}