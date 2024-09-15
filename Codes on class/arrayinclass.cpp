#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    void value(void);
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setdata(void);
    void display(void);
};
void shop::setdata()
{
    cout << "Enter item Id for Item no. " << counter + 1 <<" : ";
    cin >> itemid[counter];
    cout << "Enter item price : ";
    cin >> itemprice[counter];
    counter++;
}
void shop::value(){
    float price=0;
    for (int i = 0; i < counter; i++)
    {
        price=price+itemprice[i];
    }
    cout<<"The total price of "<<counter<<" item is :"<<price<<endl;
    
}
void shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The item price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    value();
    
    
}
int main()
{
    int n;
    cout<<"Enter the number of item you want in your mart from 1 to 100 :"<<endl;
    cin>>n;
    shop VMart;
    VMart.initcounter();
    for (int i = 0; i < n; i++)
    {
        VMart.setdata();
    }
    VMart.display();
    return 0;
}
