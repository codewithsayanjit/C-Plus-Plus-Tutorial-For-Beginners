#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++) // size_t is used because v.size() returns a size_t type. size_t is a data type in C++ used to store sizes and indexes.
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Basic declaration and push_back
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (size_t i = 0; i < size; i++) // size_t is a data type in C++ used to store sizes and indexes.
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    // Using pop_back
    vec1.pop_back();
    display(vec1);

    // Using iterator and insert
    // An iterator is used to point to elements of a vector.
    vector<int>::iterator iter = vec1.begin(); // begin() points to the first element.
    vec1.insert(iter, 566);                    // Insert 566 before the element pointed to by iter.
    display(vec1);

    // Alternative element access using .at()
    if (!vec1.empty())
    {
        cout << "First element using at(): " << vec1.at(0) << endl;
    }

    // Different vector declarations
    vector<char> vec2(4);    // Creates a character vector with 4 elements.
    vector<char> vec3(vec2); // Creates vec3 as a copy of vec2.
    vector<int> vec4(6, 3);  // Create 6 integer elements, each containing 3.

    return 0;
}