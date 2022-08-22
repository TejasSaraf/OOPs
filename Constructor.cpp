#include <iostream>
using namespace std;

class Person
{
    int health;
    char level;

public:
    Person()
    {
        cout << "This is default constructor" << endl;
    }
};
int main()
{
    // static allocation
    Person p;
    // dynamic allocation
    Person *p1 = new Person;
    return 0;
}