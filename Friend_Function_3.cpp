// Operator overloading as a friend function
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend Complex operator+(Complex, Complex);
    void print()
    {
        cout << a << " +i" << b << endl;
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}
int main()
{
    Complex c1, c2, c3;
    c1.setdata(10, 20);
    c2.setdata(20, 30);
    c3 = c1 + c2;
    c3.print();

    return 0;
}