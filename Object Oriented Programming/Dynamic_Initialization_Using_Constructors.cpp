#include <iostream>
using namespace std;

// Class representing a bank deposit
class BankDeposit
{
    // Private data members
    int principal;      // Initial deposit amount
    int years;          // Number of years
    float interestRate; // Interest rate in decimal form
    float returnValue;  // Final amount after interest

public:
    // Default constructor
    BankDeposit() {}

    // Constructor 1:
    // Takes interest rate as a float.
    // Example: 0.04 means 4% interest
    BankDeposit(int p, int y, float r);

    // Constructor 2:
    // Takes interest rate as an integer.
    // Example: 14 means 14% interest
    BankDeposit(int p, int y, int r);

    // Function to display the deposit details
    void show();
};

// Constructor 1: interest rate is given as a float
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;

    // r is already in decimal form.
    // Example: 0.04 = 4%
    interestRate = r;

    // Initially, return value is equal to principal
    returnValue = principal;

    // Calculate compound interest for each year
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Constructor 2: interest rate is given as an integer
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;

    // Convert percentage into decimal form.
    // Example: 14 becomes 0.14
    interestRate = float(r) / 100;

    // Initially, return value is equal to principal
    returnValue = principal;

    // Calculate compound interest for each year
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Function to display the result
void BankDeposit::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    // Objects created using the default constructor
    BankDeposit bd1, bd2, bd3;

    int p, y; // p = principal, y = years
    float r;  // Interest rate as decimal
    int R;    // Interest rate as percentage

    // Taking input for float interest rate
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;

    // Calls the float constructor because r is a float
    // Example: BankDeposit(10000, 2, 0.04)
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    // Taking input for integer interest rate
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;

    // Calls the integer constructor because R is an int
    // Example: BankDeposit(10000, 2, 14)
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}