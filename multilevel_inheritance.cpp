#include<iostream>
using namespace std;
class Base
{
    protected:
    int x;
    public:
    Base()
    {
        cout<<"constructor Base"<<endl;
        x=10;
    }
    Base(int a) :x(a)
    {
        cout<<"parametrized base"<<endl;
    }
    ~Base()
    {
        cout<<"Destructor"<<endl;
    }
    void get_data()
    {
        cout<<"x= "<<x<<endl;
    }
};
class Derived1 : public Base
{
    public:
    int y;
    public:
    Derived1()
    {
        cout<<"constructor derived1"<<endl;
        y=30;
    }
    Derived1(int a,int b):Base(a),y(b)
    {
        cout<<"parametrized"<<endl;
    }
    ~Derived1()
    {
        cout<<"Destructor derived1"<<endl;
    }
    void get_data()
    {
        cout<<"y= "<<y<<endl;
        Base::get_data();
    }
};
class Derived2 : protected Derived1
{
    int z;
    public:
    Derived2()
    {
        cout<<"constructor derived1"<<endl;
        z=50;
    }
    Derived2(int a,int b,int c):Derived1(a,b),z(c)
    {
        cout<<"parametrized2"<<endl;
    }
    ~Derived2()
    {
        cout<<"Destructor derived2"<<endl;
    }
    void get_data()
    {
        cout<<"z= "<<z<<endl;
        Derived1::get_data();
    }
};
int main()
{
    Derived2 d1(10,20,30);
    d1.get_data();
}