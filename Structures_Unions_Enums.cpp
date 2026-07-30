#include <iostream>
using namespace std;

// typedef gives a new name 'ep' to the structure employee
typedef struct employee
{
    int eId;      // Employee ID (4 bytes)
    char favChar; // Favorite character (1 byte)
    float salary; // Salary (4 bytes)

} ep; // Now we can write 'ep' instead of 'struct employee'

// Union stores all members in the same memory location
// Only one member can hold a valid value at a time
union money
{
    int rice;     // 4 bytes
    char car;     // 1 byte
    float pounds; // 4 bytes
};

int main()
{
    // Enum is used to create named integer constants
    // By default: breakfast = 0,lunch = 1,dinner = 2
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    // Create an enum variable
    Meal m1 = lunch;

    // Check whether m1 is equal to 2 (dinner)
    // lunch = 1, so (1 == 2) is false. 
    cout << (m1 == 2) << endl;  // Output: 0

    // Print enum values
    cout << breakfast << endl; // 0
    cout << lunch << endl;     // 1
    cout << dinner << endl;    // 2

    //* ---------------- Union Example ----------------

    union money m2;

    m2.rice = 34;

    // Now store character value
    // This overwrites the previous integer value
    m2.car = 'c';

    // Prints: c
    cout << m2.rice << endl; // Output: 99

    //* ---------------- Structure Example ----------------

    // Create structure variables
    ep sayanjit;
    struct employee dipayan;

    // Assign values
    sayanjit.eId = 1;
    sayanjit.favChar = 'c';
    sayanjit.salary = 120000000;

    // Display values
    cout << "Employee ID = " << sayanjit.eId << endl;
    cout << "Favorite Character = " << sayanjit.favChar << endl;
    cout << "Salary = " << sayanjit.salary << endl;

    return 0;
}

/*Summary:
        struct: Stores different data types, and each member has its own memory.
        typedef: Creates a shorter alias (ep) for a type.
        union: All members share the same memory, so only one member should be used at a time.
        enum: Defines named integer constants. By default, values start from 0 and increase by 1.
*/