#include <iostream>
using namespace std;

int main() {
    char s[100];
    cout << "Enter a line of text: ";
    cin.getline(s, 100); 
    bool Upper = true; 
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (Upper) {
                if (c >= 'a' && c <= 'z')
                    c = c - 32; }
                else {
                    if (c >= 'A' && c <= 'Z')
                    c = c + 32; 
            }
            Upper = !Upper; 
        }
           cout << c; 
    }
    cout << endl;
    return 0;
}
