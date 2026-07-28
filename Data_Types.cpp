#include <iostream>

using namespace std;

int glo = 6; // Global Variable
void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9; // Local Variable
    glo = 78;    // Updated Value
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15; // Int
    float pi = 3.14;    // Float
    char c = 'd';       // Char
    bool is_true = false;   // Boolean
    sum();
    cout << glo;
    cout << is_true;
    cout << "\nThe value of pi is: " << pi;
    cout << "\nThe value of c is: " << c;
    return 0;
}
