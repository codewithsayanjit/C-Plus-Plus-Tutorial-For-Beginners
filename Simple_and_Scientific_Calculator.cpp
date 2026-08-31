#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

// Q1: Multiple Inheritance
// Q2: Public Inheritance

class SimpleCalculator
{
    int a, b;

public:
    // Takes input for simple calculations
    void getDataSimple()
    {
        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b: ";
        cin >> b;
    }

    // Performs basic arithmetic operations
    void performOperationsSimple()
    {
        cout << "Performing Simple Calculations:" << endl;
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    // Takes input for scientific calculations
    void getDataScientific()
    {
        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b: ";
        cin >> b;
    }

    // Performs scientific operations
    void performOperationsScientific()
    {
        cout << "Performing Scientific Calculations:" << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};

// Q1: Multiple Inheritance
// Q2: Public Inheritance
// Q3: HybridCalculator object displays both results.
// Q4: Code reusability is implemented by inheriting
//     SimpleCalculator and ScientificCalculator.

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // Q3: Creating object of HybridCalculator
    HybridCalculator calc;

    calc.getDataSimple();
    calc.performOperationsSimple();

    calc.getDataScientific();
    calc.performOperationsScientific();

    return 0;
}
