/* Create a base class Person with member variables name and age. Derive two classes Employee
and Student from Person and observe how hierarchical inheritance works.*/
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void show_person_info() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    string company;
public:
    Employee(string n, int a, string c) : Person(n, a) {
        company = c;
    }

    void show_employee_status() {
        show_person_info();
        cout << "Company: " << company << endl;
    }
};

class Student : public Person {
private:
    string school;
public:
    Student(string n, int a, string s) : Person(n, a) {
        school = s;
    }

    void show_student_school() {
        show_person_info();
        cout << "School: " << school << endl;
    }
};

int main() {
    string n, c, s;
    int a;

    cout << "Enter employee info (name age company): ";
    cin >> n >> a >> c;
    Employee e(n, a, c);
    e.show_employee_status();

    cout << endl;

    cout << "Enter student info (name age school): ";
    cin >> n >> a >> s;
    Student k(n, a, s);
    k.show_student_school();

    return 0;
}

