/*
#include <iostream>   //parameterized constructor
using namespace std;

class Vehicle
{
private:
    string brand;
    string model;
    int year;

public:
    // Parameterized Constructor
    Vehicle(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    // Display Function
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Vehicle v1("Toyota", "Corolla", 2022);

    v1.display();

    return 0;
}
*/

//----------------------------------------------------------------
/*
#include <iostream>    //friend function
using namespace std;

class Triangle;   // Forward declaration

class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    friend void calculateArea(Rectangle, Triangle);
};

class Triangle
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    friend void calculateArea(Rectangle, Triangle);
};

// Friend function
void calculateArea(Rectangle r, Triangle t)
{
    float rectangleArea = r.length * r.breadth;
    float triangleArea = 0.5 * t.base * t.height;

    cout << "Area of Rectangle = " << rectangleArea << endl;
    cout << "Area of Triangle = " << triangleArea << endl;
}

int main()
{
    Rectangle r(10, 5);
    Triangle t(8, 6);

    calculateArea(r, t);

    return 0;
}
*/

//----------------------------------------------------------------

/*
#include <iostream>     //destructor
using namespace std;

class Book
{
private:
    string title;
    float price;

public:
    // Parameterized Constructor
    Book(string t, float p)
    {
        title = t;
        price = p;
    }

    // Display Function
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Price: Rs. " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Book object destroyed." << endl;
    }
};

int main()
{
    Book b1("C++ Programming", 750);

    b1.display();

    return 0;
}
*/

//-----------------------------------------------------------------------

/*
#include <iostream>  //friend class
using namespace std;

class TotalMarks;   // Forward declaration

class Marks
{
private:
    int theoryMarks;

protected:
    int practicalMarks;

public:
    // Parameterized Constructor
    Marks(int t, int p)
    {
        theoryMarks = t;
        practicalMarks = p;
    }

    // Friend Class
    friend class TotalMarks;
};

class TotalMarks
{
public:
    void displayMarks(Marks m)
    {
        int total = m.theoryMarks + m.practicalMarks;

        cout << "Theory Marks: " << m.theoryMarks << endl;
        cout << "Practical Marks: " << m.practicalMarks << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Marks m1(75, 20);

    TotalMarks t1;
    t1.displayMarks(m1);

    return 0;
}
*/
//-----------------------------------------------------------------------