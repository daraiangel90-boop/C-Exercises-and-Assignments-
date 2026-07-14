#include <iostream>     //Creating a class with parameterized constructor
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Display Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Angel", 19);

    s1.display();

    return 0;
}