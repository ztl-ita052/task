#include<iostream>
using namespace std;
class Base
{
    public:
    int x,y;
};
class Derived : public Base
{
    public:
    int m,n;
};
int main()
{
    Base b1;
    Derived d1;
    b1.x=10,b1.y=20;
    d1.x=100,d1.y=200;
    d1.m=120,d1.n=150;
    cout<<b1.x<<" "<<b1.y<<endl;
    cout<<d1.x<<" "<<d1.y<<endl;
    cout<<d1.m<<" "<<d1.n<<endl;
}