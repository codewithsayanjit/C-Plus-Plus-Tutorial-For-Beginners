//?  This is an example of runtime polymorphism, also called late binding.

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 10;

    // *Virtual function ": It allows the derived class version of display() to be called through a Base Class pointer.
    virtual void display()
    {
        cout << "1. Displaying Base class variable var_base "
             << var_base << endl;
    }
};

// Derived class inherits from BaseClass
class DerivedClass : public BaseClass
{
public:
    int var_derived = 25;

    // This function overrides the virtual function of the BaseClass.
    void display()
    {
        cout << "2. Displaying Base class variable var_base "
             << var_base << endl;

        cout << "2. Displaying Derived class variable var_derived "
             << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;

    // Base class pointer points to DerivedClass object
    base_class_pointer = &obj_derived;

    // Because display() is virtual, the Derived Class version of display() is called at runtime.
    base_class_pointer->display();

    return 0;
}