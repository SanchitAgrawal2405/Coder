#include <iostream>
using namespace std;
class Complex
{
    int x;
    int y;

public:
    Complex()
    {
        x = 4;
        y = 9;
    }
    Complex(int a, int b = 0)
    {
        x = a;
        y = b;
    }
    void PrintNumber();
};
void Complex::PrintNumber()
{
    cout << "The complex number is " << x << " + " << y << "i" << endl;
}
int main()
{
    Complex c1(6);
    c1.PrintNumber();

    Complex c;
    c.PrintNumber();

    return 0;
}