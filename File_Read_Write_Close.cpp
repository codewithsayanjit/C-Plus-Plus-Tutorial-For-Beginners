#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream write("sampleA.txt");

    // Creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // To read the full name including spaces

    write << "My name is: " << name << endl;

    // Disconnecting our file
    write.close();

    // Connecting our file with read stream
    ifstream read("sampleA.txt");

    // Creating a content string variable and filling it with the string present in the text file
    string content;
    getline(read, content);

    cout << "The content of the file is: " << content << endl;

    // Disconnecting our file
    read.close();

    return 0;
}