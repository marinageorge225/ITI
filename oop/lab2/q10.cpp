#include <iostream>
using namespace std;

int main() {
    int accountNumber;
    double mortgageAmount;
    int mortgageYears;
    double interestRate;
    double interest;
    double totalAmount ;
    double monthlyPayment;

    while (true) {
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;

        if (accountNumber == -1){
            break;
        }

        cout << "Enter mortgage amount (in dollars): ";
        cin >> mortgageAmount;

        cout << "Enter mortgage term (in years): ";
        cin >> mortgageYears;

        cout << "Enter interest rate (as a decimal): ";
        cin >> interestRate;

        
        interest = mortgageAmount * interestRate * mortgageYears;
        totalAmount = mortgageAmount + interest;
        monthlyPayment = totalAmount / (mortgageYears * 12);

        cout << "The monthly payable interest is: $" << monthlyPayment << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
