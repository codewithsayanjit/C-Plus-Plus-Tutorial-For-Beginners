#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Map is a collection of key-value pairs where each key is unique and is used to access the corresponding value. In this example, we will create a map to store student names (as keys) and their marks (as values).
    
    map<string, int> marksMap;

    // Insertion using square brackets operator
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // Insertion using insert method
    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});

    // Displaying map elements using iterator
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    // Additional map methods 
    cout << "Size: " << marksMap.size() << "\n";
    cout << "Is Empty: " << (marksMap.empty() ? "Yes" : "No") << "\n";

    return 0;
}