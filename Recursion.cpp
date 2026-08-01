#include <iostream>
using namespace std;

// Function to find the Fibonacci term using recursion
int fib(int n)
{
    // Base condition: If n is 0 or 1, return 1
    if (n < 2)
    {
        return 1;
    }

    // Recursive call:
    // Current Fibonacci term = Previous two Fibonacci terms
    return fib(n - 2) + fib(n - 1);
}

/*
Example:
fib(5)
= fib(3) + fib(4)
= (fib(1)+fib(2)) + (fib(2)+fib(3))
...
*/

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Base condition: Factorial of 0 and 1 is 1
    if (n <= 1)
    {
        return 1;
    }

    // Recursive formula: n! = n × (n-1)!
    return n * factorial(n - 1);
}

/*
Step-by-step calculation of factorial(4)

factorial(4)
= 4 * factorial(3)
= 4 * 3 * factorial(2)
= 4 * 3 * 2 * factorial(1)
= 4 * 3 * 2 * 1
= 24
*/

int main()
{
    int a, n;

    cout << "Enter a number: ";
    cin >> a;

    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    // Print Fibonacci series
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}

/*
Notes:
Fibonacci Sequence (This Program):
Position : 0  1  2  3  4  5  6
Value    : 1  1  2  3  5  8 13

Recursive Formula:
fib(n) = fib(n-1) + fib(n-2)
*/