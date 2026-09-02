#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr) << endl;

    // Dynamically allocate memory for a float variable
    // new float(40.78) creates a float variable and initializes it with 40.78
    float *p = new float(40.78);

    // Dereference p to get the value stored in dynamically allocated memory
    cout << "The value at address p is " << *(p) << endl;

    // Free the dynamically allocated memory
    delete p;

    // Dynamically allocate memory for an integer array of size 3
    int *arr = new int[3];

    // Store values in the dynamically allocated array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // Free the dynamically allocated array memory
    delete[] arr;

    return 0;
}