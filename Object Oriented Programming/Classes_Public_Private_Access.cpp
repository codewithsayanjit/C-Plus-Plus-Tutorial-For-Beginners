#include <iostream>
using namespace std;

// Class definition
class Employee
{
    // These can only be accessed inside the class
private: int a, b, c;

    // These can be accessed directly from main()
public: int d, e;

    // Function declaration
    void setData(int a1, int b1, int c1);

    // Function to display all data members
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// Function definition outside the class
// Scope Resolution Operator (::) is used
void Employee::setData(int a1, int b1, int c1)
{
    // Assign values to private data members
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    // Create an object of Employee class
    Employee sayanjit;

    //* This is not allowed because 'a'.'b' is private
    // sayanjit.a = 134;   // Error
    // sayanjit.b = 234;   // Error

    // Public members can be accessed directly
    sayanjit.d = 34;
    sayanjit.e = 89;

    // Set values of private members using member function
    sayanjit.setData(1, 2, 4);

    // Display all values
    sayanjit.getData();

    return 0;
}