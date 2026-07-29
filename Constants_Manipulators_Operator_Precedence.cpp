#include <iostream>
#include <iomanip> // #include <iomanip> → Used for manipulators like setw().

using namespace std;

int main()
{
    // * Constants in C++
    const int a = 3;
    cout << "The value of a was: " << a << endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // * Manipulators in C++
    int x = 3, y = 78, z = 1233;
    cout << "The value of x without setw is: " << x << endl;
    cout << "The value of y without setw is: " << y << endl;
    cout << "The value of z without setw is: " << z << endl;

    cout << "The value of x is: " << setw(4) << x << endl; // "setw" is used to specify the width of the output.
    cout << "The value of y is: " << setw(4) << y << endl; // setw(4) means the next value occupies 4 character spaces.
    cout << "The value of z is: " << setw(4) << z << endl;

    // * Operator Precedence
    // https://en.cppreference.com/cpp/language/operator_precedence
    int m = 3, n = 4;
    int o = ((((m * 5) + n) - 45) + 87); // * has higher precedence than + and -.
    cout << o;
    return 0;
}