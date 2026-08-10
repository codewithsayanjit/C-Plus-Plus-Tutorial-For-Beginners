#include <iostream>
using namespace std;

// Creating a class named Simple
class Simple
{
    // Private data members by default
    int data1;
    int data2;
    int data3;

public:
    // Constructor with default arguments
    // a is mandatory
    // b has a default value of 9
    // c has a default value of 8
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    // Function declaration
    void printData();
};

// Definition of printData() outside the class
void Simple::printData()
{
    // Displaying the values of all three data members
    cout << "The value of data1, data2 and data3 is "
         << data1 << ", "
         << data2 << " and "
         << data3 << endl;
}

int main()
{
    // Creating an object s of class Simple
    // a = 12
    // b = 13
    // c is not provided, so its default value 8 is used
    Simple s(12, 13);

    // Calling the printData() function using object s
    s.printData();

    return 0;
}