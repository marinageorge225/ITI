#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin>>n;

    double pi = 0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        double term = 1.0 / (2 * i + 1);
        pi =pi+(sign * term);
        sign *= -1; 
    }

    pi =pi* 4; 
    cout << "PI equals = " << pi << endl;

    return 0;
}
