#include <iostream>
using namespace std;
class Bank
{
    int principal;
    int year;
    float rate;

public:
    Bank() {}
    Bank(int p, int y, float r)
    {
        principal = p;
        year = y;
        rate = r;
    }
    Bank(int p, int y, int r)
    {
        principal = p;
        year = y;
        rate = float(r) / 100;
    }
    void Display()
    {
        float returnvalue = principal;
        for (int i = 0; i < year; i++)
        {
            returnvalue = returnvalue * (1 + rate);
        }
        cout << "The return value after "
             << year << " year for principal amount " << principal
             << " is " << returnvalue << "." << endl;
    }
    ~Bank()
    {
        cout << "Destructor is called for principal, year and rate " << principal
             << " , " << year << " and " << rate << " respectively." << endl;
    }
};

int main()
{
    int x, y;
    float z;
    cout << "Enter the valu of Principal , Year and Rate respectively." << endl;
    cin >> x >> y >> z;
    Bank b2, b3;
    b2 = Bank(x, y, z);
    b2.Display();
    int Z;
    cout << "Enter the valu of Principal , Year and Rate respectively." << endl;
    cin >> x >> y >> Z;
    b3 = Bank(x, y, Z);
    b3.Display();

    return 0;
}