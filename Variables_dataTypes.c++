//Printing Hello World in C++
/*
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}
*/
/*-------------------------------------------------------------------------*/


//Declaring and printing variables in C++
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declaring variables
    int age = 25;
    float weight = 70.5f;
    double height = 5.9;
    char grade = 'A';
    string name = "John Doe";
    bool isStudent = true;

    //Printing variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
*/
/*---------------------------------------------------------------------------*/


//Declaring and printing constants in C++
/*
#include <iostream>
using namespace std;

int main()
{
    //Declaring constants
    const int MAX_AGE = 100;
    const float PI = 3.14159f;
    const double GRAVITY = 9.81;
    const char INITIAL = 'J';
    const string COMPANY_NAME = "Tech Solutions";

    //Printing constants
    cout << "Max Age: " << MAX_AGE << endl;
    cout << "Value of PI: " << PI << endl;
    cout << "Gravity: " << GRAVITY << endl;
    cout << "Initial: " << INITIAL << endl;
    cout << "Company Name: " << COMPANY_NAME << endl;

    return 0;
}
*/
/*---------------------------------------------------------------------------*/


//Calculator in C++
/*
#include <iostream>
using namespace std;

int main()
{
    int num1=20, num2=3, sum, diff, pro;
    float div;
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    div = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << pro << endl;
    cout << "Division: " << div << endl;

    return 0;
}
*/
/*---------------------------------------------------------------------------*/

//User input in C++
/*
#include <iostream>
using namespace std;

int main()
{
    int num1=20, num2=3, sum, diff, pro, div;

    cout<< "Enter first number: ";
    cin>>num1;

    cout<< "Enter second number: ";
    cin>>num2;

    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    div = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl; 
    cout << "Product: " << pro << endl;
    cout << "Division: " << div << endl;

    return 0;
}
*/
/*-------------------------------------------------------------------------------*/

//Even or odd number in C++
/*
#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
    return 0;
}
*/
/*----------------------------------------------------------------------------------*/

//1 to 10(loop) numbers in C++

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        cout << i << endl;
    }
    return 0;
}

/*----------------------------------------------------------------------------------*/
