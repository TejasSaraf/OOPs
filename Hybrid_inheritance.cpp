#include <iostream>
using namespace std;

class Collage
{
public:
    int Student_id;
    long Teacher_id;
};
class Enroll
{
public:
    long long enrollment;
};

class Student : public Collage, public Enroll
{
public:
    void getdata(int Student_id, long long enrollment)
    {
        this->Student_id = Student_id;
        this->enrollment = enrollment;
    }
    void display()
    {
        cout << "Student id:" << Student_id << endl;
        cout << "Student Enrollment No:" << enrollment << endl;
    }
};

class Teacher : public Collage
{
public:
    void getdata1(long Teacher_id)
    {
        this->Teacher_id = Teacher_id;
    }
    void display1()
    {
        cout << "Teacher_id:" << Teacher_id << endl;
    }
};

int main()
{
    Student S;
    S.getdata(01, 20200000050);
    S.display();
    Teacher T;
    T.getdata1(2020201);
    T.display1();

    return 0;
}