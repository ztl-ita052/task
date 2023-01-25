#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A();
    A(int x,int y);
    A(A&);
    void print_data();
};
A::A():a(10),b(50)
{
    cout<<"default"<<endl;
}
A::A(int x,int y):a(x),b(y)
{
    cout<<"parameterised"<<endl;
}
A::A(A &temp)
{
    cout<<"copy constructor"<<endl;
    a=temp.a,b=temp.b;
}
void A::print_data()
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    A obj1,obj2(obj1),obj3(100,500),obj4(obj3);
    // obj4 = obj1;
    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
    obj4.print_data();
}