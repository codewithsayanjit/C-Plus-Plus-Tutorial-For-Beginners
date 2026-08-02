#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    // Function to set employee details
    void setId(void)
    {
        salary = 122; // Assign default salary

        cout << "Enter the id of employee" << endl;
        cin >> id; 
    }

    // Function to display employee ID
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Creating an array of 4 Employee objects
    Employee emp[4];

    // Loop through each employee object
    for (int i = 0; i < 4; i++)
    {
        emp[i].setId(); // Input employee ID
        emp[i].getId(); // Display employee ID
    }

    return 0; 
}