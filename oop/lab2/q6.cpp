#include <iostream>
using namespace std;

int main() {
    cout << "Here is the Magical Box!" << endl;
    int number;
    cout << "Please enter a number : ";
    cin >> number;

    int size = number * number;
    int row;
    int column;

    if (number % 2 == 0) {
        cout << "The Magical Box is not Okay with even numbers." << endl;
    } else {
        for (int i = 1; i <= size; i++) {
            if (i == 1) {
                row = 1;
                column = (number + 1) / 2;
            } else {
                if ((i - 1) % number != 0) {
                    row--;
                    column--;
                    if (row < 1)
                        row = number;
                    if (column < 1)
                        column = number;
                } else {
                    row++;
                    if (row > number)
                        row = 1;
                }
            }

            cout << "Number "  << i<< " is placed at Row " << row<< ", Column " << column << endl;
        }
    }

    return 0;
}
