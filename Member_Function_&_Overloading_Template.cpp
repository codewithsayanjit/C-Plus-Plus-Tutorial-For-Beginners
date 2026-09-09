#include <iostream>
using namespace std;

// 1. Class Template with Member Function defined outside the class
template <class T>
class Sayanjit {
public:
    T data;
    Sayanjit(T a) {
        data = a;
    }
    // Declaration of member function
    void display();
};

// Definition of member function outside the class template
template <class T>
void Sayanjit<T>::display() {
    cout << "Data value: " << data << endl;
}

// 2. Non-Template (Exact Match) Function
void func(int a) {
    cout << "I am first func() [Exact Match]: " << a << endl;
}

// 3. Template Function (Overloaded)
template <class T>
void func(T a) {
    cout << "I am templatised func() [Generic]: " << a << endl;
}

int main() {
    // --- Member Function Template Demonstration ---
    Sayanjit<int> h(5);
    cout << "Member variable 'data': " << h.data << endl;
    h.display();

    cout << "\n-----------------------------------\n\n";

    // --- Function Template Overloading Demonstration ---
    // Calls the non-template int version because exact match takes highest priority
    func(4);

    // Calls the templatised version because float/double does not match void func(int) exactly
    func(4.5);

    // Calls the templatised version with a character
    func('C');

    return 0;
}