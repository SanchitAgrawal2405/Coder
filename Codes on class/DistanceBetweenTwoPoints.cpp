#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    friend void Distance(Point l1, Point l2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
void Distance(Point l1, Point l2)
{
    float l3;
    l3 = (sqrt((pow(l1.x - l2.x, 2) + (pow(l1.y - l2.y, 2)))));
    cout << "The distane between point (" << l1.x << "," << l1.y << ") and (" << l2.x << "," << l2.y << ") is " << l3 << ".\n \n" << endl;
}
int main()
{
    int x, y, z;
    for (int i = 0; i <= 10; i++)
    {
        cout << "Choose the option according to your need." << endl;
        cout << "-------> 1.Choose any number to calculate." << endl;
        cout << "-------> 2.Choose 0 to QUIT or TERMINATE." << endl;
        cout << "Enter your choice : ";
        cin >> z;
        if (z != 0)
        {
            cout << "Enter the value of x : ";
            cin >> x;
            cout << "Enter the value of y : ";
            cin >> y;
            Point p(x, y);
            p.display();
            cout << "Enter the value of x : ";
            cin >> x;
            cout << "Enter the value of y : ";
            cin >> y;
            Point q(x, y);
            q.display();
            Distance(p, q);
        }
        else if (z == 0)
        {
            break;
        }
    }
    return 0;
}