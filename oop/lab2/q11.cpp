#include <iostream>
using namespace std;

int main() {
    double sales;   
    double baseSalary = 200;
    double commissionRate = 0.09;

    while (true) {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;

        if (sales == -1)
            break;

        double salary = baseSalary + (commissionRate * sales);

        cout << "Salary is: $" << salary << endl;
    }

    return 0;
}
