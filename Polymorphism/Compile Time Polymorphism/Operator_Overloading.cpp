#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void real_part(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    Complex operator+(Complex const &c)
    {
        Complex a;
        a.real = real + c.real;
        a.imag = imag + c.imag;
        return a;
    }
    void print()
    {
        cout << real << " +i" << imag << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.real_part(10, 20);
    c2.real_part(20, 30);
    c3 = c1 + c2;
    c3.print();

    return 0;
}