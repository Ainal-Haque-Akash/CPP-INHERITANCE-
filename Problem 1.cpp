/* Using inheritance, determine the grade of a given mark in two different grading
systems. Implement two classes RU, VU, and function overloading to solve the problem.*/
#include <iostream>
using namespace std;

class grading_systems
{
public:
    virtual void getgrade(int mark)=0;
};
class RU : public grading_systems
{
public:
    void getgrade(int mark)override
    {
        cout<<"RU grading system: "<<endl;
        if(mark>= 80)
            cout<<"A+"<<endl;
        else if(mark>= 70)
            cout<<"A"<<endl;
        else if(mark>= 60)
            cout<<"B+"<<endl;
        else if(mark>= 50)
            cout<<"B"<<endl;
        else if(mark>= 40)
            cout<<"C+"<<endl;
        else if(mark>= 33)
            cout<<"F"<<endl;
        else if(mark>= 0)
            cout<<"F"<<endl;

    }
};
class VU : public grading_systems
{
public:
    void getgrade(int mark) override
    {
        cout<<"VU grading system: "<<endl;
        if(mark>= 85)
            cout<<"A+"<<endl;
        else if(mark>= 75)
            cout<<"A"<<endl;
        else if(mark>= 65)
            cout<<"B+"<<endl;
        else if(mark>= 55)
            cout<<"B"<<endl;
        else if(mark>= 45)
            cout<<"C+"<<endl;
        else if(mark>= 35)
            cout<<"C"<<endl;
        else if(mark>= 0)
            cout<<"F"<<endl;
    }
};
int main()
{
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;
    RU ru;
    VU vu;
    ru.getgrade(mark);
    vu.getgrade(mark);
    return 0;
}

