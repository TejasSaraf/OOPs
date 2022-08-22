#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    void getdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "a:" << a << endl;
        cout << "b:" << b << endl;
    }
};
int main()
{
    A a1;
    a1.getdata(10, 20);
    a1.display();

    return 0;
}