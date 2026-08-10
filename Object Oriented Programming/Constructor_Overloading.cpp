#include <iostream>
using namespace std;

class Complex
{
    int a, b; // 'a' is the real part, 'b' is the imaginary part

public:
    // Default constructor
    // Initializes both real and imaginary parts to 0
    Complex()
    {
        a = 0;
        b = 0;
    }

    // Parameterized constructor
    // Initializes the complex number with real part x and imaginary part y
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Constructor with one argument
    // Initializes the real part with x and imaginary part to 0
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    // Function to display the complex number
    void printNumber()
    {
        cout << "Your number is "
             << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Calls the parameterized constructor with two arguments
    // a = 4, b = 6
    Complex c1(4, 6);
    c1.printNumber();

    // Calls the constructor with one argument
    // a = 5, b = 0
    Complex c2(5);
    c2.printNumber();

    // Calls the default constructor
    // a = 0, b = 0
    Complex c3;
    c3.printNumber();

    return 0; 
}