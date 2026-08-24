#include <iostream>

using namespace std;

//* Destructor never takes an argument and does not return any value

int count = 0;

class num
{
public:

    //* Constructor: It is automatically called whenever an object is created
    num()
    {
        ::count++;

        cout << "This is the time when constructor is called for object number "
             << ::count << endl;
    }

    //? Destructor:  It is automatically called when an object goes out of scope

    ~num()
    {
        cout << "This is the time when destructor is called for object number "
             << ::count << endl;

        ::count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;

    cout << "Creating first object n1" << endl;

    // Creating object n1
    // Constructor is called here
    num n1;

    {
        // This is a local block
        cout << "Entering this block" << endl;

        cout << "Creating two more objects" << endl;

        // Creating objects n2 and n3
        // Constructor is called for both objects
        num n2, n3;

        cout << "Exiting this block" << endl;

        // n3 and n2 are destroyed automatically here
        //* Destructors are called in reverse order:
        // First n3, then n2
    }

    // n1 is still alive because it was created in main()
    cout << "Back to main" << endl;

    // n1 is destroyed automatically when main() ends
    return 0;
}