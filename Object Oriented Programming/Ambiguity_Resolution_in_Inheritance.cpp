#include <iostream>

using namespace std;

class Base1
{
public:
    // greet() function of Base1
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    // greet() function of Base2
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

// Derived class inherits from both Base1 and Base2
class Derived : public Base1, public Base2
{
public:
    // Derived class has its own greet() function
    // This removes the ambiguity between Base1::greet() and Base2::greet()
    void greet()
    {
        // Calling greet() of Base1 specifically
        Base1::greet();
    }
};

// Another base class
class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

// Derived class D inherits from B
class D : public B
{

public:
    // D's new say() method hides/overrides the base class's say()
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    // Ambiguity 1:
    // Base1 and Base2 both have a function named greet().
    // So, if we directly call d.greet() without defining
    // greet() in Derived, the compiler would get confused.

    Base1 base1obj;
    Base2 base2obj;

    base1obj.greet();

    base2obj.greet();

    Derived d;

    // Calls Derived's own greet().Inside it, Base1::greet() is called.
    d.greet();

    // Ambiguity 2:
    // B b;
    // b.say();

    // D d;
    // d.say();

    // Here there is NO ambiguity.
    // D has its own say() function, so d.say() calls D's say() instead of B's say().

    return 0;
}