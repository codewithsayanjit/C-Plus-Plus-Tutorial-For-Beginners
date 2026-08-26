#include <iostream>

using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;

    // Default constructor
    Employee() {}
    
    // Parameterized constructor
    Employee(int empID)
    {
        id = empID;
        salary = 34.0;
    }
};

/*
    Derived Class Syntax:

    class DerivedClassName : visibility-mode BaseClassName
    {
        Class members and methods
    };

    Example:
    class Programmer : public Employee
*/

// Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;

    // Parameterized constructor of Programmer
    Programmer(int empID)
    {
        id = empID;
        languageCode = 55;
    }

    // Member function to display employee ID
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    // Creating objects of Employee class
    Employee harry(3), rohan(8);

    // Displaying salaries of Employee objects
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    // Creating an object of Programmer class
    Programmer skill(10);

    // Displaying language code
    cout << skill.languageCode << endl;

    // Displaying inherited ID
    cout << skill.id << endl;

    // Calling getData() function
    skill.getData();

    return 0;
}
/*
    Note:

    1. Default visibility mode is private.

    2. Public Visibility Mode:
       Public members of the base class become public members of the derived class.

    3. Private Visibility Mode:
       Public members of the base class become private members of the derived class.

    4. Private members:
       Private members of the base class are never directly accessible in the derived class.
*/