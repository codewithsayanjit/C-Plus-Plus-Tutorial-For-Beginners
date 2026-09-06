#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "Sayanjit Jana";
    string st2;

    // Opening sampleA.txt using ofstream constructor
    // ofstream is used for writing data into a file
    ofstream out("sampleA.txt");

    // Writing the string "Sayanjit Jana" into sampleA.txt
    out << st;

    // Closing the output file
    out.close();

    // Opening sampleB.txt using ifstream constructor
    // ifstream is used for reading data from a file
    ifstream in("sampleB.txt");

    // Reading a word from sampleB.txt
    in >> st2;

    // Reading a complete line from sampleB.txt
    getline(in, st2);

    // Displaying the content read from the file
    cout << st2;

    // Closing the input file
    in.close();

    return 0;
}