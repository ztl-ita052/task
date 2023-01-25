#include<iostream>
using namespace std;
class A 
{
    int x;
    public:
    A()
    {
        cout<<"a constructor"<<endl;
        x=10;
    }
    A(int a):x(a)
    {
        cout<<"a parametrized"<<endl;
    }
    ~A()
    {
        cout<<"a destructor"<<endl;
    }
    void get_data()
    {
        cout<<"x= "<<x<<endl;
    }
};
class B 
{
    int y;
    public:
    B()
    {
        cout<<"b constructor"<<endl;
        y=20;
    }
    B(int a):y(a)
    {
        cout<<"b parametrized"<<endl;
    }
    ~B()
    {
        cout<<"b destructor"<<endl;
    }
    void get_data()
    {
        cout<<"y= "<<y<<endl;
    }
};
class C 
{
    int z;
    public:
    C()
    {
        cout<<"c constructor"<<endl;
        z=30;
    }
    C(int a):z(a)
    {
        cout<<"c parametrized"<<endl;
    }
    ~C()
    {
        cout<<"c destructor"<<endl;
    }
    void get_data()
    {
        cout<<"z= "<<z<<endl;
    }
};
class D:public A public B public C 
{
    int m;
    public:
    D()
    {
        cout<<"d constructor"<<endl;
        m=100;
    }
    D(int n,int k,int l,int o) : A(n),B(k),C(l),m(o)
    {
        cout<<"d parametrized"<<endl;
    }
    ~D()
    {
        cout<<"d destructor"<<endl;
    }
    void get_data()
    {
        cout<<"m= "<<m<<endl;
        A::get_data();
        B::get_data();
        c::get_data();
    }
};
int main()
{
    D d(10,20,30,40);
    d.get_data();
}