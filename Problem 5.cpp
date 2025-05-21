/*Define a base class Base with a protected member variable. Derive a class Derived from Base
and observe how protected members are accessible in the derived class.*/
#include <iostream>
using namespace std;

class Base
{
protected:
    int number;

public:
    Base(int n)
    {
        number= n;
    }
};
class Derived : public Base
{
public:

    Derived(int n) : Base(n) {}

    void display()
    {
        cout<<"the protected number is: "<<number<<endl;
    }
};
int main()
{
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    Derived D(N);
    D.display();

    return 0;
}
