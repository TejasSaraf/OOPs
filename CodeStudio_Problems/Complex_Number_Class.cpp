#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void plus(Complex const &c2)
    {
        real = real + c2.real;
        imag = imag + c2.imag;
    }
    void multiply(Complex const &c2)
    {
        int first = real * c2.real;
        int last = (-1) * (real * c2.imag);
        int inner = imag * c2.real;
        int outer = imag * c2.imag;
        real = first + last;
        imag = inner + outer;
    }
    void print()
    {
        cout << real << " + "
             << "i" << imag << endl;
    }
};
int main()
{
    Complex c1(8, 9);
    Complex c2(4, 5);

    c1.plus(c2);
    c1.print();

    c1.multiply(c2);
    c1.print();
}