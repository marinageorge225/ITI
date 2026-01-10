#include <iostream>
using namespace std;

int main() {
   
    double sales[20];
    cout << " Enter 20 sales values:"<<endl;
    for (int i = 1; i <= 20; i++) {
        cout << "Enter sales number "<<i <<endl;
        cin >> sales[i];
    }

    double allowance[75];
    cout << "Enter 75 allowance values:" <<endl;
    for (int i = 1; i <= 75; i++) {
        cout << "Enter allowance number " << i <<endl;
        cin >> allowance[i];
        allowance[i] += 1000; 
    }

    int numbers[50];
    for (int i = 0; i < 50; i++) {
        numbers[i] = 0;
    }

    int GPA[10];
    cout << "Enter 10 GPA integer values: <<endl";
    for (int i = 1; i <= 10; i++) {
        cout << "Enter GPA number "<< i <<endl;
        cin >> GPA[i];
    }

    cout << "GPA values in column format:" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << GPA[i] << endl;
    }
    return 0;
}
