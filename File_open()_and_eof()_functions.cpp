#include <iostream>
#include <fstream>  // For file handling
#include <string>   // For eof() function

using namespace std;

int main() {
    
    // Declaring an object of type ofstream
    ofstream write;
    
    //* Opening the file using open()
    write.open("sampleA.txt");
    
    // Writing data to the file
    write << "This is me\n";
    write << "This is also me\n";
    
    // Closing the file connection after writing
    write.close();
    
    // Declaring an object of type ifstream
    ifstream read;
    string st;
    
    // Opening the same file for reading
    read.open("sampleA.txt");
    
    //* Reading lines until the end-of-file (eof) is reached
    while (read.eof() == 0) {
        getline(read, st);
        cout << st << endl;
    }
    
    // Closing the file connection after reading
    read.close();
    
    return 0;
}