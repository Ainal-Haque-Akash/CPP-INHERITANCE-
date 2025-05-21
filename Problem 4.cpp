/* Define a base class Base with a constructor and destructor. Derive a class Derived from Base
and observe the order of constructor and destructor execution.*/
#include <iostream>
using namespace std;

class Base
{
public:
    //base constructor
    Base()
    {
        cout<<"Base constructor has been called"<<endl;
    }
    //base destructor
    ~Base()
    {
        cout<<"Base destructor has been called"<<endl;
    }
};
//inheritance
class derived : public Base
{
public:
    //derived constructor
    derived()
    {
        cout<<"derived constructor has been called"<<endl;
    }
    //derived destructor
    ~derived()
    {
        cout<<"derived destructor has been called"<<endl;
    }
};
int main()
{
    cout<<".....creating derived object....."<<endl;
    derived D;

    cout<<".....cleaning memory with exiting main....."<<endl;

    return 0;
}
