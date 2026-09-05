#include <iostream>
using namespace std;

// Example 1: Using this-> to distinguish data member and parameter
class A
{
    int a;

public:
    void setData(int a)
    {
        // 'this' is a pointer to the current object
        // this->a refers to the class data member
        // 'a' refers to the function parameter
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

// Example 2: Returning *this to enable method chaining
class B
{
    int b;

public:
    // setData() takes the integer value and stores it in the class variable
    B &setData(int b)
    {
        this->b = b;  // 'this->b' refers to the class member variable. 'b' refers to the parameter
        return *this; // Returns the current object
    }

    void getData()
    {
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    // Example 1
    A obj1;
    obj1.setData(4);
    obj1.getData();

    cout << endl;

    // Example 2
    B obj2;
    obj2.setData(10).getData(); // setData() returns the same object, so getData() can be called immediately

    return 0;
}