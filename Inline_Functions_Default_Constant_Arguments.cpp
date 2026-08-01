#include <iostream>
using namespace std;

//* Inline function
// The compiler may replace the function call with the actual code, which can make small functions execute faster.
inline int product(int a, int b)
{
    //* Static variables are generally not recommended. Inside inline functions because they retain their value between function calls.

    static int c = 0; // This executes only once
    c = c + 1;        // Next time this function is run, the value of c will be retained

    return a * b;
}

// Function with a default argument. If no second argument is provided, factor = 1.04 (4% increase)
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int a, b;

    // Uncomment these lines to take input from the user
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    // Call the inline function
    cout << "The product of a and b is "
         << product(a, b) << endl;

    // Initial amount in the bank
    int money = 100000;

    // Uses the default factor (1.04)
    cout << "If you have " << money
         << " Rs in your bank account, you will receive "
         << moneyReceived(money)
         << " Rs after 1 year" << endl;

    // Uses a custom factor (1.10) for VIP customers
    cout << "For VIP: If you have " << money
         << " Rs in your bank account, you will receive "
         << moneyReceived(money, 1.1)
         << " Rs after 1 year";

    return 0;
}