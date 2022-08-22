#include <iostream>
using namespace std;

class Addition
{
public:
    int a, b, c;

public:
    void addition(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << a + b << endl;
    }
    void addition(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << a + b + c << endl;
    }
};
int main()
{
    Addition a1, a2;
    a1.addition(10, 30);
    a2.addition(20, 30, 10);
    return 0;
}