#include<iostream>
#include<string>
using namespace std;
class Animal{
    private:
        string a,b,c;
    public:
        string d,e;
        void setdata(string a1,string b1,string c1);
        void getdata(){
            cout<<"The animal name is : "<<a<<endl;
            cout<<"The animal sound is : "<<b<<endl;
            cout<<"The animal habitat is : "<<c<<endl;
            cout<<"The animal behavior is : "<<d<<endl;
            cout<<"The animal breed is : "<<e<<endl;  
        }
};
void Animal::setdata(string a1,string b1,string c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){

    Animal Dog;
    Dog.setdata("Tommy","Bark","Den");
    Dog.d="Faithful";
    Dog.e="Alsasion";
    Dog.getdata();
    
    
    return 0;
}