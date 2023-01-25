#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A();
    A(int x,int y);
    void print_data();
};
A::A():a(10),b(20)
{
    cout<<"default"<<endl;
}
A::A(int x, int y):a(x),b(y)
{
    cout<<"parameterised"<<endl;
}
void A::print_data()
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    A obj1,obj2(100,500);
    obj1.print_data();
    obj2.print_data();
}