/*
* OOPs - Classes and objects

    C++ --> initially called --> C with classes by stroustroup
    class --> extension of structures (in C)
    structures had limitations
        - members are public
        - No methods
    classes --> structures + more
    classes --> can have methods and properties
    classes --> can make few members as private & few as public
    ! structures in C++ are typedefed
* you can declare objects along with the class declarion like this:
    class Employee{
                ? Class definition
            } sayanjit, rohan, dipayan;

sayanjit.salary = 8 makes no sense if salary is private
*/

//* Nesting of member functions: If one member function is called inside the other member function of the same class it is called nesting of a member function.

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string str;           // Stores the binary number
    void check_bin(void); // Private function to check whether input is binary or not

public:
    void read(void);            // Reads binary number from user
    void ones_compliment(void); // Finds 1's complement
    void display(void);         // Displays binary number
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> str;
}

void binary::check_bin(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    check_bin(); //* Calls private function (Nesting of member functions)
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying binary number" << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
    cout << endl;
}

int main()
{
    binary bin; // Create object of binary class
    bin.read();
    // bin.check_bin(); // Not allowed because check_bin() is private
    bin.display(); // Display original binary number
    bin.ones_compliment();
    bin.display(); // Display complemented binary number

    return 0;
}
