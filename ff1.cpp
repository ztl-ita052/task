#include<iostream>
using namespace std;
class family
{
    int cash,gold;
    public:
    void set_data()
    {
        cout<<"enter cash and gold"<<endl;
        cin>>cash>>gold;
    }
    friend int main();
    friend void print_data(family);
};
void print_data(family t)
{
    cout<<t.cash<<" "<<t.gold<<endl;
}
int main()
{
    family f;
    f.set_data();
    cout<<f.cash<<" "<<f.gold<<endl;
    print_data(f);
}