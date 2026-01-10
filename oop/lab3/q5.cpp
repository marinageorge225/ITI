#include <iostream>
using namespace std;

double ToYen(double dollars);
double ToEuro(double dollars);


int main() {
    double start, end;
    cout << "Enter the starting dollars: ";
    cin >> start;
    cout << "Enter the ending dollars: ";
    cin >> end;

    if (start <= 0 || end <= 0 || end < start) {
        cout << "Please enter a valid positive numbers" << endl;
        return 0;
    }

    cout << "\n Dollars\t\t Yen \t\t Euro" << endl;
    cout << "--------------------------------------------\n";

    for (double dollars = start; dollars <= end; dollars++) {
        std::cout << dollars << "\t\t"<< ToYen(dollars) << "\t\t"<< ToEuro(dollars) << endl;
    }
    
    cout << "--------------------------------------------\n";
    return 0;
}

double ToYen(double dollars) {
    double Yen = 118.87;
    double result =dollars * Yen;
    return result;
  
}

double ToEuro(double dollars) {
    double Euro = 0.92;
    double result = dollars * Euro;
    return result;
}
