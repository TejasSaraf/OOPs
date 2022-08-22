#include <iostream>
using namespace std;

class Person
{
    // properties
    int age;
};

int main()
{
    Person p; // creation of object
    cout << "Size :" << sizeof(p) << endl;
    return 0;
}