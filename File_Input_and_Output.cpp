#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1 = "Sayanjit Jana is a good boy and he is a good programmer.";
    string st2;

    // Opening sampleA.txt using ofstream constructor
    // ofstream is used for writing data into a file
    ofstream write("sampleA.txt");

    // Writing the string "Sayanjit Jana" into sampleA.txt
    write << st1;

    // Opening sampleB.txt using ifstream constructor
    // ifstream is used for reading data from a file
    ifstream read("sampleB.txt");

    // Reading a word from sampleB.txt
    read >> st2;

    // Reading a complete line from sampleB.txt
    getline(read, st2);

    // Displaying the content read from the file
    cout << st2;
    return 0;
}