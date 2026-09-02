#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    // Constructor with parameterized initialization list
    // Syntax:
    // Constructor(arguments) : data_member(value), data_member(value)
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(a + j)
    Test(int i, int j) : b(j), a(i+b)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}
