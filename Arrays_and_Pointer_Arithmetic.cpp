#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 75, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 73;
    mathMarks[2] = 37;
    mathMarks[3] = 57;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // You can change the value of an array
    marks[3] = 45;
    cout << "These are marks" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    //* Pointers and arrays
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout << "The value of *p is " << *p << endl;
    // cout << "The value of *(p+1) is " << *(p + 1) << endl;
    // cout << "The value of *(p+2) is " << *(p + 2) << endl;
    // cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}
