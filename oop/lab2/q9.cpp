#include <iostream>
using namespace std;

int main() {
    double totalCollected, sales, countyTax, stateTax, totalTax;
    string month;

    double Country_Rate = 0.05;
    double State_Rate = 0.04;
    double Total_Rate = Country_Rate + State_Rate;


    while (true) {
        cout << "Enter total amount collected (-1 to quit): ";
        cin >> totalCollected;

        if (totalCollected == -1)
            break;

        cout << "Enter name of month: ";
        cin >> month;

        sales = totalCollected / (1 + Total_Rate);
        countyTax = sales * Country_Rate;
        stateTax = sales * State_Rate;
        totalTax = countyTax + stateTax;

        cout << "Total Collections: $" << totalCollected << endl;
        cout << "Sales:             $"  << sales << endl;
        cout << "County Sales Tax:  $" << countyTax << endl;
        cout << "State Sales Tax:   $"  << stateTax << endl;
        cout << "Total Sales Tax Collected: $"  << totalTax << endl;
       
    }

    cout << "Program ended." << endl;
 
}
