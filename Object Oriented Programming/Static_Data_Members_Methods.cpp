#include <iostream>
using namespace std;

class Employee
{
    int id;           // Private data member to store employee ID
    static int count; //* Static data member shared by all objects

public:
    // Function to take employee ID as input
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;

        count++; // Increase employee count whenever a new ID is entered
    }

    // Function to display employee details
    void getData(void)
    {
        cout << "The id of this employee is "
             << id
             << " and this is employee number "
             << count
             << endl;
    }

    //* Static member function
    static void getCount(void)
    {
        // cout << id;        // Error: Static function cannot access non-static member

        cout << "The value of count is " << count << endl;
    }
};

// Memory is allocated only once for count
int Employee::count; //* Default value is 0

int main()
{
    // Creating three Employee objects
    Employee sayanjit, rohan, lovish;

    // sayanjit.id = 1;
    // Error: id is private

    // sayanjit.count = 1;
    // Error: count is private and shared by all objects

    // Enter and display first employee
    sayanjit.setData();
    sayanjit.getData();
    Employee::getCount(); // Calling static function using class name

    // Enter and display second employee
    rohan.setData();
    rohan.getData();
    rohan.getCount();

    // Enter and display third employee
    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}