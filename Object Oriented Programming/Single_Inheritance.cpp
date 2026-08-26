#include <iostream>

using namespace std;

class Base
{
    int data1; // Private by default, so it cannot be directly accessed by Derived

public:
    int data2;

    // Function declarations
    void setData();
    int getData1();
    int getData2();
};

// Function to set values of data1 and data2 (Function definition)
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}

// Function to return the value of private data1 (Function definition)
int Base::getData1()
{
    return data1;
}

// Function to return the value of data2 (Function definition)
int Base::getData2()
{
    return data2;
}

// Derived Class
class Derived : public Base
{
    int data3; // Private by default

public:
    void process();
    void display();
};

// Function to calculate data3
void Derived::process()
{
    // data2 is inherited from Base
    // getData1() is used to access private data1 indirectly
    data3 = data2 * getData1();
}

// Function to display all data values
void Derived::display()
{
    // Accessing data1 through its public getter function
    cout << "Value of data 1 is " << getData1() << endl;

    // data2 is public in Base, so it can be accessed directly
    cout << "Value of data 2 is " << data2 << endl;

    // Displaying data3 of Derived class
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;

    // Calling Base class function
    der.setData();

    // Calling Derived class function to calculate data3
    der.process();

    // Calling Derived class function to display values
    der.display();

    return 0;
}