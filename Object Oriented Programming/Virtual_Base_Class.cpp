/*
⭐ Why virtual public Student is used?

=> This is an example of Hybrid Inheritance and the Diamond Problem.
*/

#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

//* Test class inherits Student virtually
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

//* Sports class also inherits Student virtually
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

// Result inherits from both Test and Sports
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        // Calculate total marks
        total = maths + physics + score;

        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result Sayanjit;

    Sayanjit.set_number(55);
    Sayanjit.set_marks(80.5, 85.9);
    Sayanjit.set_score(9);
    Sayanjit.display();

    return 0;
}