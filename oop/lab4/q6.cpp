#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char line[1000];
    int lineCount = 0;

    cout << "Simple Line Editor (Press 'E' then Enter to quit)\n";
    cout << "------------------------------------------------\n";

    while (true) {
        cout << "> "; 
        cin.getline(line, 1000);
        
        if ((line[0] == 'e' || line[0] == 'E') && strlen(line) == 1)
            break;
        cout << "You wrote: " << line << endl;
        lineCount++;
        if (lineCount >= 100) {
            cout << "Maximum lines reached.\n";
            break;
        }
    }

    cout << "\nExiting Line Editor...\n";
    cout << "Total lines entered: " << lineCount << endl;
    return 0;
}