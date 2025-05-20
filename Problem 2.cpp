/* Define a base class Vehicle with private, protected, and public member variables. Derive a
class Car and observe how different access specifiers affect member accessibility.*/
#include <iostream>
using namespace std;
class Vehicle
{
private:
    string engine_type;
protected:
    int wheel;
public:
    string brand;

    Vehicle(string eng,int w,string b)
    {
        engine_type=eng;
        wheel=w;
        brand=b;
    }
    void show_engine()
    {
        cout<<"SHOW ENGINE: "<<engine_type<<endl;
    }
};
class car : public Vehicle
{
public:
    car(string eng,int w, string b) : Vehicle(eng, w, b) {}

    void display_model()
    {
        cout<<"Wheel: "<<wheel<<endl;
        cout<<"brand: "<<brand<<endl;
    }
};
int main()
{
    car c("petrol", 4, "Suzuki");
    c.display_model();
    c.brand= "Royal Enfield";
    cout<<"updated brand: "<<c.brand<<endl;
    c.show_engine();
    return 0;
}
