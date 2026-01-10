#include <iostream>
using namespace std;

int power(int base, int exponent);

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
cin >> exponent;
    if(exponent <1) {
        cout << "Exponent must be greater than or equal 1" << endl;
    } else {
        int result = power(base, exponent);
        cout <<"Result is = "<< result << endl;
    }
    return 0;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; ++i) {
        result *= base;  
    }
    return result;
}