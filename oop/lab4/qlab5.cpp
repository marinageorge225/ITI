#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char **lines = nullptr;   
    int lineCount = 0;        
    int capacity = 2;       
    lines = new char*[capacity];
    cout << "Dynamic Line Editor (Press 'E' then Enter to quit)\n";
    cout << "--------------------------------------------------\n";
    while (true) {
        cout << "> ";
        char buffer[1000];
        cin.getline(buffer, 1000);
        if ((buffer[0] == 'e' || buffer[0] == 'E') && strlen(buffer) == 1)
            break;
        int length = strlen(buffer);
        char *newLine = new char[length + 1]; 
        strcpy(newLine, buffer);
        cout << "[DEBUG] Allocated " << length + 1 << " bytes for line " << lineCount + 1 << endl;
        if (lineCount >= capacity) {
            capacity *= 2;
            char **temp = new char*[capacity];
            for (int i = 0; i < lineCount; ++i)
                temp[i] = lines[i];
            delete[] lines;
            lines = temp;
            cout << "[DEBUG] Increased array capacity to " << capacity << endl; }
        lines[lineCount++] = newLine;
        cout << "You wrote: " << newLine << endl;
        if (lineCount >= 100) {
            cout << "Maximum lines reached.\n";
            break;}}
    cout << "\n --- Lines Stored --- \n";
    for (int i = 0; i < lineCount; ++i)
        cout << i + 1 << ": " << lines[i] << endl;
    cout << "\nExiting Line Editor...\n";
    cout << "Total lines entered: " << lineCount << endl;
    for (int i = 0; i < lineCount; ++i) {
        delete[] lines[i];
        cout << "[DEBUG] Freed memory for line " << i + 1 << endl;}
    delete[] lines;
    cout << "[DEBUG] Freed lines array memory.\n";
    cout << "\n Program ran successfully! No memory leaks should remain.\n";
    return 0;
}
