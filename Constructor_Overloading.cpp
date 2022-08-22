#include <iostream>
using namespace std;

class Addition
{
    int a, b, c;

public:
    Addition(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << a + b << endl;
    }
    Addition(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << a + b + c << endl;
    }
};

int main()
{
    Addition a1(10, 20), a2(10, 20, 30);

    return 0;
}