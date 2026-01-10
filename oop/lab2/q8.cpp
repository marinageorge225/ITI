#include <iostream>
using namespace std;

int main() {
    double num;
    double min;
    double max;

    cout << "Enter number 1: ";
    cin >> num;
    min = max = num;

    for (int i = 2; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    cout << "The smallest number is: " << min << endl;
    cout << "The largest number is: " << max << endl;
}
