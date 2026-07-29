#include <iostream>

using namespace std;

int c = 45;

int main()
{

    // *************Build in Data types****************
    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl; // ? To access the value of the global variable "c" ,scope resolution operator "::"

    // ************* Float, double and long double Literals****************
    float d = 34.4F;
    long double e = 34.4L;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;   // No suffix → double (8 bytes)
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl; // f or F → float (4 bytes)
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl; // l or L → long double (12 bytes on your system,
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The value of d is " << d << endl
         << "The value of e is " << e << endl;

    // *************Reference Variables****************
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float &y = x; // Reference Variable "&"
    cout << x << endl;
    cout << y << endl;

    // *************Typecasting****************
    int m = 45;
    float n = 45.46;
    cout << "The value of m is " << (float)m << endl;
    cout << "The value of m is " << float(m) << endl;

    cout << "The value of n is " << int(n) << endl;

    cout << "The expression is " << m + n << endl;
    cout << "The expression is " << m + int(n) << endl;

    return 0;
}
