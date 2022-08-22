#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};
int main()
{
    Animal *p, a1;
    Dog d1;
    p = &d1;
    p->speak();

    return 0;
}