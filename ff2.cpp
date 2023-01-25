#include<iostream>
using namespace std;
class A;
class B
{
    public:
    //void print_data(A&);
    void print_data(A*);
    // void print_data(A);
};
class A
{
    public:
    int a,b;
    // public:
    void set_data();
    friend void B::print_data(A*);
};
void A ::set_data()
{
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
}
// void B::print_data(A& temp)
// {
//     cout<<temp.a<<" "<<temp.b<<endl;
// }
void B::print_data(A *temp)
{
    cout<<temp->a<<" "<<temp->b<<endl;
}
// void B::print_data(A temp)
// {
//     // cout<<temp.a<<" "<<temp.b<<endl;
// }
int main()
{
    A a1;
    a1.set_data();
    B b1;
    // b1.print_data(a1);
    b1.print_data(&a1);
    // b1.print_data(a1);
}