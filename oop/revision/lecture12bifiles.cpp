//Read and write binary file 
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Record {
    int lineNumber;
    char text[100]; 
};

int main() {
    fstream obj;
    obj.open("lecture12.bin", ios::out | ios::binary);
    if (!obj) {
        cout << "Error in creating binary file." << endl;
        return 0;
    }

    Record r;
    r.lineNumber = 6;
    strcpy(r.text, "Last Line");
    obj.write(reinterpret_cast<char*>(&r), sizeof(r)); //Converting structure to char array and writing to file
    obj.close();

    obj.open("lecture12.bin", ios::in | ios::binary);
    if (!obj) {
        cout << "Error in opening binary file." << endl;
        return 0;
    }

    cout << "Binary file content is:" << endl;
    Record readR;
    while (obj.read(reinterpret_cast<char*>(&readR), sizeof(readR))) {
        cout << "Line " << readR.lineNumber << ": " << readR.text << endl;
    }
    obj.close();

    return 0;
}
