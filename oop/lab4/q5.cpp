#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[6]; 
    cout << "Enter 6 strings:\n";
    for (int i = 0; i < 6; i++) {
        cout<< "Enter string " << i + 1 << ": ";
        cin >>s[i];
    }

    int sum = 0;
    for (int i = 0; i < 6; i++) {
        int num = stoi(s[i]);
        sum += num;
    }
    double average =sum / 6;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
