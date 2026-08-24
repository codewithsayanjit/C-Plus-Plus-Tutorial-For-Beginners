#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    // Default constructor
    Number()
    {
        a = 0;
    }

    // Parameterized constructor
    Number(int num)
    {
        a = num;
    }

    //* Copy constructor
    // When no copy constructor is found, the compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called  !!!" << endl;
        a = obj.a;
    }

    // Display function
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y(55), z(45), z2;

    x.display();
    y.display();
    z.display();

    // Copy constructor invoked
    Number z1(z);
    z1.display();

    // Copy constructor is NOT called
    // This is assignment, not initialization
    z2 = z;
    z2.display();

    // Copy constructor invoked
    Number z3 = z;
    z3.display();

    // Copy constructor invoked
    Number z4 = y;
    z4.display();

    // z1, z2 and z3 contain the same value as z

    return 0;
}