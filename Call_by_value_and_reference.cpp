#include <iostream>
using namespace std;

// Call by Value
// This function will NOT swap the original values
void swap(int a, int b)
{
    int temp = a; // Store value of a in temp
    a = b;        // Copy value of b to a
    b = temp;     // Copy temp to b

    // Swapping happens only inside this function
    // Original variables remain unchanged
}

// Call by Reference using Pointers
// This function swaps the original values
void swapPointer(int *a, int *b)
{
    int temp = *a; // Store value pointed by a
    *a = *b;       // Copy value of b into a
    *b = temp;     // Copy temp into b
}

// Call by Reference using C++ Reference Variables
// This also swaps the original values
void swapReferenceVar(int &a, int &b)
{
    int temp = a; // Store value of a
    a = b;        // Assign b to a
    b = temp;     // Assign temp to b
}

int main()
{
    // Declare and initialize two variables
    int x = 4, y = 5;

    // Display original values
    cout << "Before Swapping:" << endl;
    cout << "x = " << x << " and y = " << y << endl;

    // Call by Value (No swapping)
    // swap(x, y);

    // Call by Reference using Pointer
    // swapPointer(&x, &y);

    // Call by Reference using Reference Variable
    swapReferenceVar(x, y);

    // Display values after swapping
    cout << "After Swapping:" << endl;
    cout << "x = " << x << " and y = " << y << endl;

    return 0;
}

/*
Summary: 
        Call by Value (swap) → Original values do not change.
        Call by Reference using Pointer (swapPointer) → Original values change.
        Call by Reference using Reference Variable (swapReferenceVar) → Original values change (simpler C++ method).
*/