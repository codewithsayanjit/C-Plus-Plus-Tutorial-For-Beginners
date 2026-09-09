#include <iostream>
using namespace std;

// 1. Function Template
template <class T>
T square(T a)
{
    return a * a;
}

// 2. Function Template with Two Parameters
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

// 3. Function Template for Swapping
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Function Template
    cout << "Square is " << square(5) << endl;

    // Function Template with Parameters
    int a = 5;
    float b = 2.5;
    

    cout << "Average of " << a << " and " << b
         << " = " << funcAverage(a, b) << endl;

    // Swapping using Function Template
    int x = 10;
    int y = 20;

    cout << "\nBefore swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapp(x, y);

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}