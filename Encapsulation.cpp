#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    string name;
    int roll_no;

public:
    Student(string name, int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No:" << roll_no << endl;
    }
};
int main()
{
    Student s("Jack", 21);
    s.display();
    return 0;
}