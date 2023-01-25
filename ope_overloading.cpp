#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A():x(),y() {}
    A(int a,int b):x(a),y(b){}
    A operator +(A &temp)
    {
        cout<<"operator + overloaded"<<endl;
        A ret;
        ret.x=x+temp.x;
        ret.y=y+temp.y;
        return ret;
    }
    void get_data()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    // A obj1(10,20),obj2(100,200),obj3;
    // obj3=obj1+obj2;
    // obj3.get_data();
    A obj1(10,20),obj2(100,200),obj3(1000,2000);
    A obj4(1,2),obj5;
    obj5=obj1+obj2+obj3+obj4;
    obj5.get_data();
}