#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A()
    {
        cout<<"constructor"<<endl;
        cin>>a>>b;
    }
    A(int x, int y)
    {
        cout<<"parametrized"<<endl;
        a=x,b=y;
    }
    void print_data()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj1,obj2(100,300);
    obj1.print_data();
    obj2.print_data();
}