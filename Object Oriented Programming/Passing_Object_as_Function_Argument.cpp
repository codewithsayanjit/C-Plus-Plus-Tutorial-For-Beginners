#include <iostream>
using namespace std;

class complex
{
    int a; // Real part
    int b; // Imaginary part

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    // Passing objects as function arguments
    // o1 and o2 are objects of the complex class
    // Their values are added and stored in the calling object
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a; // Add real parts
        b = o1.b + o2.b; // Add imaginary parts
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // Create three objects of the complex class
    complex c1, c2, c3;

    // Set values for the first complex number
    c1.setData(1, 2);
    c1.printNumber();

    // Set values for the second complex number
    c2.setData(3, 4);
    c2.printNumber();

    // Pass c1 and c2 as arguments to the function
    // Their sum is stored in c3
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}