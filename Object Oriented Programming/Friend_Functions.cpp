#include <iostream> // Header file for input and output
using namespace std;

// Example:
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i

class Complex
{
    int a, b; // Private data members (real and imaginary parts)

    // Friend function declaration
    // This function can access the private members of Complex
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    // Function to set real and imaginary values
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Function to display the complex number
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Friend function definition
// This is not a member of the class
// It can directly access private members because it is declared as a friend
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3; // Create a new Complex object

    // Add the real and imaginary parts
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    // Return the resulting complex number
    return o3;
}

int main()
{
    // Create three Complex objects
    Complex c1, c2, sum;

    // Set first complex number
    c1.setNumber(1, 4);
    c1.printNumber();

    // Set second complex number
    c2.setNumber(5, 8);
    c2.printNumber();

    // Call friend function to add two complex numbers
    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
