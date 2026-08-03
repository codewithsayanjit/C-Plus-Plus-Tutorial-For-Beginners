#include <iostream>
using namespace std;

//* Forward declaration of Complex class. This tells the compiler that a class named Complex exists.
class Complex;

class Calculator
{
public:
    // Function to add two normal integers
    int add(int a, int b)
    {
        return (a + b);
    }

    // Function declarations to add real and imaginary parts
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    // Private data members
    int a, b;

    //* If only specific functions should access private members:
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumCompComplex(Complex, Complex);

    //* Making the entire Calculator class a friend.Now every function of Calculator can access private members.
    friend class Calculator;

public:
    // Sets the real and imaginary parts
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Displays the complex number
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Definition of Calculator function
// Returns the sum of the real parts of two complex numbers
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

// Returns the sum of the imaginary parts of two complex numbers
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    // Create two Complex objects
    Complex o1, o2;

    // Initialize the objects
    o1.setNumber(1, 4); // 1 + 4i
    o1.printNumber();
    o2.setNumber(5, 7); // 5 + 7i
    o2.printNumber();

    // Create Calculator object
    Calculator calc;

    // Calculate the sum of real parts
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    // Calculate the sum of imaginary parts
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}