#include <iostream>
using namespace std;

//* Function Prototype: Declares the function before main() so the compiler knows it exists.
// type function-name (arguments);

// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable
int sum(int, int); //*--> Acceptable .This is a Function Prototype
void good(); //--> Acceptable

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2);
    good();
    return 0;
}

//*  Function Definition
int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void good()
{
    cout << "\nHello, Good Morning";
}
