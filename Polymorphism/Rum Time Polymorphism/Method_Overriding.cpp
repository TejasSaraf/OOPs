#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog Bark" << endl;
    }
};
class Tiger : public Animal
{
public:
    void speak()
    {
        cout << "Tiger Roar" << endl;
    }
};
int main()
{
    Dog D1;
    D1.speak();
    Tiger T1;
    T1.speak();
    return 0;
}